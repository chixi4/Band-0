
void FUN_ram_4202d1b0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_26;
  undefined1 uStack_25;
  int iStack_24;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  iVar1 = FUN_ram_4202fef8(3,0x10,&iStack_24);
  if (iVar1 == 0) {
    iVar1 = 6;
  }
  else {
    FUN_ram_4202791e(param_1,&uStack_26,auStack_20,&uStack_25,auStack_18);
    uVar2 = FUN_ram_4202829c(param_1);
    iVar1 = FUN_ram_4202b040(param_1 + 0x1e,uVar2,param_1 + 0x10,param_1 + 0x17,uStack_26,uStack_25,
                             auStack_20,auStack_18,iVar1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),iStack_24);
      iStack_24 = 0;
      if (iVar1 == 0) {
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0xd) = 2;
        return;
      }
    }
  }
  if (iStack_24 != 0) {
    (*(code *)&SUB_ram_40011a08)();
  }
  *param_2 = iVar1;
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  *(undefined1 *)(param_2 + 1) = 8;
  return;
}

