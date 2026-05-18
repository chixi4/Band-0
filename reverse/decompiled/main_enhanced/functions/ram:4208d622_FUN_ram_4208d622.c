
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4208d622(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x01') &&
     ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) != 0)) {
    DAT_ram_3fcc42ac = 1;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcc4014 + 4);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcc4014 + 4);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcc4014 + 4,0x42075280,0);
  iVar2 = FUN_ram_420792d2(param_2,0x4207ed48,0);
  if (iVar2 != 3) {
    FUN_ram_40393cee(0xf,0);
    puVar1 = _DAT_ram_3fcdfb20;
    *(char *)(_DAT_ram_3fcdfb20 + 0x11) = (char)param_2;
    *(undefined1 *)((int)puVar1 + 0x46) = 1;
    puVar1[0xf] = param_3;
    puVar1[0x10] = param_4;
    *puVar1 = param_1;
    uVar3 = FUN_ram_4208d5e4(0x4207f480);
    return uVar3;
  }
  FUN_ram_4207a038(1,8,2,&DAT_ram_3c10213c,param_2);
  return 0xffffffff;
}

