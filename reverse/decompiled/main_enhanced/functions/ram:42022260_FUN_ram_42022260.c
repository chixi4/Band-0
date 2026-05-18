
int FUN_ram_42022260(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_7c;
  char acStack_78 [36];
  undefined1 auStack_54 [68];
  
  iVar3 = FUN_ram_4204beee("",0,&uStack_7c);
  iVar2 = 0;
  if (iVar3 == 0) {
    cVar1 = '\0';
    do {
      (*(code *)&SUB_ram_40010488)(acStack_78,0,0x21);
      (*(code *)&SUB_ram_40010488)(auStack_54,0,0x41);
      iVar3 = FUN_ram_420213d0(uStack_7c,cVar1,acStack_78,auStack_54);
      if (iVar3 == 0) {
        iVar2 = iVar2 + (uint)(acStack_78[0] != '\0');
      }
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\x03');
    FUN_ram_4204c3d0(uStack_7c);
  }
  return iVar2;
}

