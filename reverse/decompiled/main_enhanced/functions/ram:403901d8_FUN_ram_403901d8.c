
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_403901d8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_80;
  
  local_80 = mepc;
  uVar4 = FUN_ram_40397ab6();
  uVar3 = mcause;
  uVar2 = mstatus;
  uVar1 = _DAT_ram_600c2148;
  _DAT_ram_600c2148 = *(int *)((mcause & 0x1f) * 4 + 0x600c20c8) + 1;
  fence();
  mstatus = mstatus | 8;
  FUN_ram_40391d92();
  FUN_ram_4039fd48(&local_80,uVar3 & 0x1f);
  mstatus = mstatus & 0xfffffff7;
  fence();
  _DAT_ram_600c2148 = uVar1;
  mstatus = FUN_ram_40397b12(uVar2,uVar4);
  mcause = uVar3;
  mepc = local_80;
  return CONCAT44(param_2,param_1);
}

