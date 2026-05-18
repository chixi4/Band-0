
int FUN_ram_42066ad8(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
                    int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_80 [8];
  byte bStack_78;
  byte bStack_74;
  undefined1 auStack_70 [16];
  undefined4 local_60 [6];
  int local_48 [8];
  
  if (param_4 < 0x10) {
    iVar2 = -1;
  }
  else {
    iVar2 = -1;
    if ((param_5 < 6) && (((param_2 & 0xffffffef) == 0x20 || (param_2 == 0x40)))) {
      param_2 = param_2 >> 1;
      iVar1 = param_4 - 0x10;
      for (iVar2 = 0; iVar2 != param_5 << 2; iVar2 = iVar2 + 4) {
        *(undefined4 *)((int)local_60 + iVar2) = *(undefined4 *)(param_6 + iVar2);
        *(undefined4 *)((int)local_48 + iVar2) = *(undefined4 *)(param_7 + iVar2);
      }
      *(undefined4 *)((int)local_60 + iVar2) = param_8;
      *(int *)(iVar2 + (int)local_48) = iVar1;
      FUN_ram_40399daa(auStack_80,param_3,0x10);
      FUN_ram_40399daa(param_8,param_3 + 0x10,iVar1);
      bStack_78 = bStack_78 & 0x7f;
      bStack_74 = bStack_74 & 0x7f;
      iVar2 = FUN_ram_42021dc8(param_1 + param_2,param_2,auStack_80,param_8,iVar1);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_ram_4206692e(param_1,param_2,param_5 + 1,local_60,local_48,auStack_70),
         iVar2 == 0)) {
        iVar2 = FUN_ram_40399d6c(auStack_70,param_3);
        iVar2 = -(uint)(iVar2 != 0);
      }
    }
  }
  return iVar2;
}

