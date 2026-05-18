
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420594f0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int aiStack_88 [4];
  undefined1 auStack_78 [92];
  
  _DAT_ram_3fcb5e1e = 0xffff;
  _DAT_ram_3fcb5e14 = 0;
  _DAT_ram_3fcb5e18 = 0;
  _DAT_ram_3fcb5e1c = 0;
  FUN_ram_40399daa(0x3fcb5e20,param_1,4);
  _DAT_ram_3fcb5e28 = 0;
  _DAT_ram_3fcb5e2c = 0;
  _DAT_ram_3fcb5e2e = 0xffff;
  _DAT_ram_3fcb5e24 = 0;
  FUN_ram_40399daa(0x3fcb5e30,param_3,4);
  _DAT_ram_3fcb5e34 = (ushort)((uint)param_2 >> 8) | (ushort)(param_2 << 8);
  _DAT_ram_3fcb5e36 = (ushort)((uint)param_4 >> 8) | (ushort)(param_4 << 8);
  (*(code *)&SUB_ram_40012be4)(auStack_78);
  (*(code *)&SUB_ram_40012be8)(auStack_78,&DAT_ram_3fcb5e14,0x40);
  (*(code *)&SUB_ram_40012bec)(auStack_78,aiStack_88);
  iVar1 = _DAT_ram_3fcb6828 + aiStack_88[0];
  iVar2 = FUN_ram_420599aa();
  return iVar2 * 0xfa + iVar1;
}

