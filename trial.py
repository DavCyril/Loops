import tkinter as tk
from tkinter import Label
from time import strftime


def time():
    time_string = strftime('%H:%M:%S %p')
    date_string = strftime('%A, %B %d, %Y')
    label_time.config(text=time_string)
    label_date.config(text=date_string)
    label_time.after(1000, time)

root = tk.Tk()
root.title('Digital Clock')

Label(root, font=("Courier New",30, "bold"), text="Digital Clock", fg="white", bg="grey").pack()

label_time = tk.Label(root, font=('Source Sans Pro Regular', 40, 'bold'), background='grey', foreground='white')
label_time.pack(anchor='center')

label_date = tk.Label(root, font=('calibri', 40, 'bold'), background='grey', foreground='white')
label_date.pack(anchor='center')

time()

root.mainloop()