class A {
    B b;
    void method1 (info:int) {
        b.method2 ();
        b.method3 (info);
    }
}

class B {
    int info
    void method2 () {
        ...
    }
    void method3 (info:int) {
        self.info = info
    }
}

