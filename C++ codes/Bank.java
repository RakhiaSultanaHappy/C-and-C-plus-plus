class BankAccount {
    String name, id;
    double balance;

    BankAccount(String n, String i, double b) {
        name = n;
        id = i;
        balance = b;
    }

    public void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    public double getBalance() {
        return balance;
    }

    public void displayInfo() {
        System.out.println("Name:" + name + "; Id:" + id + "; Balance:" + balance);
    }
}

public class Bank {
    public static void main(String[] args) {
        BankAccount account = new BankAccount("HAPPY", "23533", 8000);
        account.withdraw(1500);
        account.displayInfo();
        account.deposit(2500);
        System.out.println("Current Balance: " + account.getBalance());
    }
}