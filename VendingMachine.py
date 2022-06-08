class VendingMachine:
    def __init__(self):
        self.bottles = 20

    def purchase(self, amount):
        self.bottles -= amount

    def restock(self, amount):
        self.bottles += amount

    def get_inventory(self):
        return self.bottles

    def report(self):
        print(f'Inventory: {self.bottles} bottles')


def main():
    v = VendingMachine()
    v.purchase(int(input()))
    v.restock(int(input())
    v.report()
