
undefined4
FUN_ram_4206347a(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int param_6,uint param_7,int param_8)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uStack_48;
  undefined1 *apuStack_44 [4];
  
  if (param_6 != 0) {
    iVar1 = FUN_ram_42061e74(*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x40));
    iVar3 = 0x5f;
    if (iVar1 == 0x18) {
      iVar3 = 0x67;
    }
    iVar3 = thunk_FUN_ram_4206616e
                      (param_1,3,0,iVar3 + (param_7 & 0xffff) & 0xffff,&uStack_48,apuStack_44);
    if (iVar3 != 0) {
      uVar4 = 0xfe;
      if (*(int *)(param_1 + 0x230) == 2) {
        uVar4 = 2;
      }
      *apuStack_44[0] = uVar4;
      apuStack_44[0][1] = (byte)((uint)param_4 >> 8) | 1;
      apuStack_44[0][2] = (byte)param_4 | 8;
      if (*(int *)(param_1 + 0x230) == 2) {
        apuStack_44[0][3] = 0;
        apuStack_44[0][4] = 0;
      }
      else {
        apuStack_44[0][3] = *(undefined1 *)(param_3 + 3);
        apuStack_44[0][4] = *(undefined1 *)(param_3 + 4);
      }
      FUN_ram_40399daa(apuStack_44[0] + 5,param_3 + 5,8);
      uVar4 = (undefined1)((param_7 & 0xffff) >> 8);
      if (iVar1 == 0x18) {
        apuStack_44[0][0x65] = uVar4;
        apuStack_44[0][0x66] = (char)param_7;
        puVar2 = apuStack_44[0] + 0x67;
      }
      else {
        apuStack_44[0][0x5d] = uVar4;
        apuStack_44[0][0x5e] = (char)param_7;
        puVar2 = apuStack_44[0] + 0x5f;
      }
      FUN_ram_40399daa(puVar2,param_6,param_7);
      FUN_ram_40399daa(apuStack_44[0] + 0xd,param_5,0x20);
      FUN_ram_4206326c(param_1,param_8,*(undefined4 *)(param_8 + 0x58),param_4,param_2,0x888e,iVar3,
                       uStack_48,apuStack_44[0] + 0x4d);
      thunk_FUN_ram_420661ec(iVar3);
      return 0;
    }
  }
  return 0xffffffff;
}

