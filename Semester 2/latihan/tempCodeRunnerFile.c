 for (int i = theStack.top; i >= 0; i--)
    {
        strcpy(result[i], pop());
    }

    print(result);