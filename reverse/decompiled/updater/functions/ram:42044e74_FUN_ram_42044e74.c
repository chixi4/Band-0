
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42044e74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x01') &&
     ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) != 0)) {
    DAT_ram_3fcb5220 = 1;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcb4f84 + 4);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcb4f84 + 4);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcb4f84 + 4,0x4202d67a,0);
  iVar2 = FUN_ram_420338c4(param_2,0x420363f8,0);
  if (iVar2 != 3) {
    FUN_ram_40392eec(0xf,0);
    puVar1 = _DAT_ram_3fcdfb20;
    *(char *)(_DAT_ram_3fcdfb20 + 0x11) = (char)param_2;
    *(undefined1 *)((int)puVar1 + 0x46) = 1;
    puVar1[0xf] = param_3;
    puVar1[0x10] = param_4;
    *puVar1 = param_1;
    uVar3 = FUN_ram_42044e36(0x42036b30);
    return uVar3;
  }
  FUN_ram_42033fd8(1,8,2,0x3c080004,param_2);
  return 0xffffffff;
}

