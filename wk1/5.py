import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import numpy as np


def read_data(filename):
    data = np.loadtxt(filename, unpack=True)
    return data


def main():
    f, (ax1, ax2) = plt.subplots(1, 2)
    ax1.hist(read_data('cmake-build-debug/uni.txt'))
    ax2.hist(read_data('cmake-build-debug/norm.txt'))
    plt.show()
    return 0


if __name__ == '__main__':
    main()
