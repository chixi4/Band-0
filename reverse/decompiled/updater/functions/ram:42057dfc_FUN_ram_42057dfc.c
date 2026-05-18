
void FUN_ram_42057dfc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_3 = param_3 * 0x18;
  iVar2 = param_1 + 0x32;
  if ((&DAT_ram_3fcb5d38)[param_3] == '\x02') {
    if (*(ushort *)(&DAT_ram_3fcb5d36 + param_3) < 0x11d) {
      if (*(ushort *)(&DAT_ram_3fcb5d36 + param_3) < 0x10e) goto LAB_ram_42057e52;
      iVar1 = FUN_ram_42057a84(param_1,iVar2,param_3 + 0x3fcb5d30,iVar2,param_1 + 4,0x3c0793d8,
                               &DAT_ram_3fcb5d28 + param_3,1);
    }
    else {
      iVar1 = FUN_ram_42057d4e(param_1,&DAT_ram_3fcb5d28 + param_3);
    }
    if (iVar1 == 0) {
      (&DAT_ram_3fcb5d38)[param_3] = 3;
    }
  }
LAB_ram_42057e52:
  FUN_ram_42059422(param_1,param_2,iVar2,param_3 + 0x3fcb5d30,0x800);
  return;
}

