
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4205c3f8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int aiStack_88 [4];
  undefined1 auStack_78 [92];
  
  _DAT_ram_3fcc2672 = 0xffff;
  _DAT_ram_3fcc2668 = 0;
  _DAT_ram_3fcc266c = 0;
  _DAT_ram_3fcc2670 = 0;
  FUN_ram_4039c11e(0x3fcc2674,param_1,4);
  _DAT_ram_3fcc267c = 0;
  _DAT_ram_3fcc2680 = 0;
  _DAT_ram_3fcc2682 = 0xffff;
  _DAT_ram_3fcc2678 = 0;
  FUN_ram_4039c11e(0x3fcc2684,param_3,4);
  _DAT_ram_3fcc2688 = (ushort)((uint)param_2 >> 8) | (ushort)(param_2 << 8);
  _DAT_ram_3fcc268a = (ushort)((uint)param_4 >> 8) | (ushort)(param_4 << 8);
  (*(code *)&SUB_ram_40012be4)(auStack_78);
  (*(code *)&SUB_ram_40012be8)(auStack_78,&DAT_ram_3fcc2668,0x40);
  (*(code *)&SUB_ram_40012bec)(auStack_78,aiStack_88);
  iVar1 = _DAT_ram_3fcc5358 + aiStack_88[0];
  iVar2 = FUN_ram_4205c954();
  return iVar2 * 0xfa + iVar1;
}

