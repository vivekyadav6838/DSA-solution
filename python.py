def common_position(A,C,D):
    n = len(A)
    dp = [[0]*n for _ in range(n)]
    for i in range(n):
        dp[i][i] = 0
    for i in range(n-1):
        dp[i][i+1] = abs(A[i]-A[i+1])
    for i in range(n-2):
        for j in range(i+2,n):
            dp[i][j] = min(dp[i][j-1]+abs(A[j]-A[i])+C,dp[i+1][j]+abs(A[j]-A[i])+C)
    for i in range(n-1):
        for j in range(i+1,n):
            dp[i][j] = min(dp[i][j],dp[i+1][j-1]+abs(A[j]-A[i])+C)
    return min(dp[0])

