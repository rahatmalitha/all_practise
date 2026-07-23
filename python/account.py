class Account:
    def __init__(self, balance, account):
        self.balance = balance
        self.account = account
        print(balance, account)

    def debit(self, balance):
        self.balance -= balance
        print("Debit =", balance, "Now =", self.get_balance())
    def credit(self, balance):
        self.balance += balance
        print("Credit =", balance, "Now =", self.get_balance())
    def get_balance(self):
        return self.balance

a1 = Account(10000, 324738746)
a1.debit(500)
a1.credit(2000)
