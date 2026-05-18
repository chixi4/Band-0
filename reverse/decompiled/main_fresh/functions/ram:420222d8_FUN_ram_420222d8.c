
undefined4 FUN_ram_420222d8(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  char acStack_88 [36];
  undefined1 auStack_64 [80];
  
  uVar1 = 0x103;
  if (DAT_ram_3fcc516c != '\0') {
    if (param_1 == 0) {
      param_1 = 10000;
    }
    iVar3 = FUN_ram_42022260();
    uVar1 = 0x105;
    if (iVar3 != 0) {
      cVar2 = '\0';
      do {
        (*(code *)&SUB_ram_40010488)(acStack_88,0,0x21);
        (*(code *)&SUB_ram_40010488)(auStack_64,0,0x41);
        iVar3 = FUN_ram_420221ba(cVar2,acStack_88,auStack_64);
        if (((iVar3 == 0) && (acStack_88[0] != '\0')) &&
           (iVar3 = FUN_ram_42021fd4(acStack_88,auStack_64,0), iVar3 == 0)) {
          iVar3 = FUN_ram_42022130(param_1);
          if (iVar3 != 0) {
            if (cVar2 == '\0') {
              return 0;
            }
            FUN_ram_420221a8(acStack_88,auStack_64);
            return 0;
          }
          thunk_FUN_ram_420847b6();
          FUN_ram_40398498(0x14);
        }
        cVar2 = cVar2 + '\x01';
      } while (cVar2 != '\x03');
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

