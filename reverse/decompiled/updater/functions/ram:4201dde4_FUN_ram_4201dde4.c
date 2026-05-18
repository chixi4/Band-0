
void FUN_ram_4201dde4(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_e4;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  byte bStack_de;
  undefined1 uStack_dd;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  char acStack_40 [3];
  byte bStack_3d;
  undefined1 auStack_38 [32];
  
  iVar2 = *(int *)(param_1 + 0x10);
  do {
    if (iVar2 == 0) {
      return;
    }
    iStack_e4 = 0;
    while (iVar3 = FUN_ram_42020034(iVar2,0xff,0x42,0,&iStack_e4,&uStack_e0,0xff), iVar3 == 0) {
      iVar3 = *param_2;
      FUN_ram_40399daa(auStack_c0,&uStack_e0,0x20);
      FUN_ram_40399daa(auStack_a0,auStack_c0,0x20);
      FUN_ram_40399daa(auStack_60,auStack_a0,0x20);
      FUN_ram_40399daa(acStack_40,auStack_60,0x20);
      FUN_ram_40399daa(auStack_80,acStack_40,0x20);
      FUN_ram_40399daa(auStack_60,auStack_80,0x20);
      FUN_ram_40399daa(acStack_40,auStack_60,0x20);
      cVar1 = acStack_40[0];
      uVar5 = (uint)bStack_3d;
      for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        iVar4 = FUN_ram_4039a1de(auStack_38,iVar3 + 8,0xf);
        if ((((iVar4 == 0) && (*(char *)(iVar3 + 0x18) == cVar1)) &&
            (*(byte *)(iVar3 + 0x1a) <= uVar5)) &&
           (uVar5 < (uint)*(byte *)(iVar3 + 0x19) + (uint)*(byte *)(iVar3 + 0x1a)))
        goto LAB_ram_4201deee;
      }
      FUN_ram_420203ca(iVar2,uStack_e0,uStack_df,auStack_d8,uStack_dd,0xff);
LAB_ram_4201deee:
      iStack_e4 = iStack_e4 + (uint)bStack_de;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

