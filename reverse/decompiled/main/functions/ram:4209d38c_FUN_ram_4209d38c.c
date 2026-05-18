
undefined4
FUN_ram_4209d38c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((((((*param_5 != '\0' || param_5[1] != '\0') || param_5[2] != '\0') || param_5[3] != '\0') ||
        param_5[4] != '\0') || param_5[5] != '\0') ||
      (((((*(char *)(param_1 + 0x22a) != '\0' || *(char *)(param_1 + 0x22b) != '\0') ||
         *(char *)(param_1 + 0x22c) != '\0') || *(char *)(param_1 + 0x22d) != '\0') ||
       *(char *)(param_1 + 0x22e) != '\0') || *(char *)(param_1 + 0x22f) != '\0')) &&
     ((param_9 == 0 ||
      (iVar2 = FUN_ram_4209c60a(param_2,param_3,*(undefined4 *)(param_1 + 0x1f0),param_4,param_7,
                                param_8), iVar2 == 0)))) {
    uVar1 = FUN_ram_4209f5d8(param_1,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0xffffffff;
}

