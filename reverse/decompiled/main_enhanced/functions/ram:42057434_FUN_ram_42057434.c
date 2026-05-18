
int FUN_ram_42057434(undefined4 param_1,short param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_ram_42053b52(0x22,param_2 + 0x14,0x280);
  if (iVar3 != 0) {
    if (*(ushort *)(iVar3 + 10) < 0x14) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    puVar1 = *(undefined1 **)(iVar3 + 4);
    uVar2 = FUN_ram_420523aa(param_4);
    *puVar1 = (char)uVar2;
    puVar1[1] = (char)((ushort)uVar2 >> 8);
    uVar2 = FUN_ram_420523aa(param_5);
    puVar1[4] = (char)param_3;
    puVar1[5] = (char)((uint)param_3 >> 8);
    puVar1[2] = (char)uVar2;
    puVar1[3] = (char)((ushort)uVar2 >> 8);
    puVar1[6] = (char)((uint)param_3 >> 0x10);
    puVar1[7] = (char)((uint)param_3 >> 0x18);
    uVar4 = FUN_ram_420523b8(param_1);
    puVar1[8] = (char)uVar4;
    puVar1[9] = (char)((uint)uVar4 >> 8);
    puVar1[10] = (char)((uint)uVar4 >> 0x10);
    puVar1[0xb] = (char)((uint)uVar4 >> 0x18);
    uVar2 = FUN_ram_420523aa(param_6 | 0x5000);
    puVar1[0xc] = (char)uVar2;
    puVar1[0xd] = (char)((ushort)uVar2 >> 8);
    uVar2 = FUN_ram_420523aa(param_7);
    puVar1[0xe] = (char)uVar2;
    puVar1[0xf] = (char)((ushort)uVar2 >> 8);
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  return iVar3;
}

