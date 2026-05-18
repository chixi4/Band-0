
int FUN_ram_42066976(int param_1)

{
  int iVar1;
  int aiStack_14 [2];
  
  aiStack_14[0] = 0;
  if ((*(ushort *)(param_1 + 0x3d8) & 8) != 0) {
    iVar1 = FUN_ram_420667bc(param_1,param_1 + 0x88 + (uint)*(ushort *)(param_1 + 1000),
                             *(undefined2 *)(param_1 + 0x3ea),*(undefined4 *)(param_1 + 0x84),
                             aiStack_14);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = (**(code **)(iVar1 + 8))(param_1 + 0x80);
      return -(uint)(iVar1 != 0);
    }
    if ((aiStack_14[0] == 6) || (aiStack_14[0] == 7)) {
      iVar1 = FUN_ram_420666ee(param_1 + 0x80);
      return iVar1;
    }
  }
  return -1;
}

