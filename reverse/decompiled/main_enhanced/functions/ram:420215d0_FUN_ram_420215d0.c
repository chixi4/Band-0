
int FUN_ram_420215d0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uStack_1b4;
  char acStack_1b0 [36];
  undefined1 auStack_18c [68];
  undefined1 auStack_148 [33];
  undefined1 auStack_127 [267];
  
  iVar4 = FUN_ram_4204beee("",1,&uStack_1b4);
  if (iVar4 == 0) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = uStack_1b4;
      if (param_1 != uVar2) {
        (*(code *)&SUB_ram_40010488)(acStack_1b0,0,0x21);
        (*(code *)&SUB_ram_40010488)(auStack_18c,0,0x41);
        iVar4 = FUN_ram_420213d0(uVar1,uVar2,acStack_1b0,auStack_18c);
        if ((iVar4 == 0) && (acStack_1b0[0] != '\0')) {
          iVar4 = uVar3 * 0x62;
          uVar3 = uVar3 + 1 & 0xff;
          FUN_ram_4039c61e(auStack_148 + iVar4,acStack_1b0,0x21);
          FUN_ram_4039c61e(auStack_127 + iVar4,auStack_18c,0x41);
        }
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 != 3);
    puVar5 = auStack_148;
    FUN_ram_420215a6(uStack_1b4,0);
    FUN_ram_420215a6(uStack_1b4,1);
    FUN_ram_420215a6(uStack_1b4,2);
    for (uVar2 = 0; uVar2 != uVar3; uVar2 = uVar2 + 1 & 0xff) {
      iVar4 = FUN_ram_42021464(uStack_1b4,uVar2,puVar5,puVar5 + 0x21);
      puVar5 = puVar5 + 0x62;
      if (iVar4 != 0) goto LAB_ram_420216b0;
    }
    iVar4 = FUN_ram_4204c0c8();
LAB_ram_420216b0:
    FUN_ram_4204c3d0(uStack_1b4);
  }
  return iVar4;
}

