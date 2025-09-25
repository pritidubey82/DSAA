import pandas as pd

def users_percentage(users: pd.DataFrame, register: pd.DataFrame) -> pd.DataFrame:
    no_of_users = users['user_id'].count() #count the number of users
    df = register.groupby('contest_id')['user_id'].nunique().reset_index()
    df['percentage'] = round((df['user_id']/no_of_users)*100,2)
    df.sort_values(by = ['percentage','contest_id'], ascending = (False,True), inplace = True)
    return df[['contest_id','percentage']]
    