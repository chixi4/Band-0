
undefined4
FUN_ram_4205a5a6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = FUN_ram_42053b52(0xe,0x1c,0x280);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    if (0x1b < *(ushort *)(iVar3 + 10)) {
      puVar1 = *(undefined1 **)(iVar3 + 4);
      uVar2 = FUN_ram_420523aa(param_8);
      puVar1[6] = (char)uVar2;
      puVar1[7] = (char)((ushort)uVar2 >> 8);
      if (*(char *)(param_1 + 0x38) == '\x06') {
        FUN_ram_4039c11e(puVar1 + 8,param_4,6);
        FUN_ram_4039c11e(puVar1 + 0x12,param_6,6);
        FUN_ram_4039c11e(puVar1 + 0xe,param_5,4);
        FUN_ram_4039c11e(puVar1 + 0x18,param_7,4);
        puVar1[1] = 1;
        puVar1[2] = 8;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[4] = 6;
        puVar1[5] = 4;
        FUN_ram_4205c318(param_1,iVar3,param_2,param_3,0x806);
        FUN_ram_42053ac4(iVar3);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

