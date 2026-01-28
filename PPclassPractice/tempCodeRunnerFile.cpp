
        int l;
        cin>>l;
        s.insert(l);
    }
    int value;
    cout<<"Enter the value : ";
    cin>>value;

    for(int i=0;i<n;i++){
        if(s.count(i)==value){