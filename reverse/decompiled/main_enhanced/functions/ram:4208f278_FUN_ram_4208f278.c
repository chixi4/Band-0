
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208f278(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  
  iVar4 = _DAT_ram_3fcc4014;
  FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdc9c,param_1,param_2,
                   *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x46));
  iVar2 = (*(code *)&SUB_ram_40011d40)();
  FUN_ram_420919c6(iVar2 << 2);
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if ((iVar3 != 0) && (iVar2 == 0)) {
    (*(code *)&SUB_ram_40011ee4)();
  }
  puVar1 = _DAT_ram_3fcdfb20;
  bVar7 = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46);
  if ((bVar7 & 8) == 0) {
    if ((bVar7 & 2) != 0) {
      bVar7 = bVar7 & 0xfd;
      goto LAB_ram_4208f2f8;
    }
  }
  else {
    bVar7 = bVar7 & 0xf7;
LAB_ram_4208f2f8:
    *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = bVar7;
  }
  if (((*(char *)(*(int *)(gp + -0xb4) + 0x35c) == '\0') &&
      ((*(byte *)((int)puVar1 + 0x46) & 4) != 0)) && (*(char *)((int)puVar1 + 0x47) == '\0')) {
    pcVar6 = &DAT_ram_3c0fdcc8;
    uVar5 = 4;
  }
  else {
    if (param_2 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
      *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 0xfb;
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdcec);
      uVar5 = 1;
      goto LAB_ram_4208f368;
    }
    if ((*puVar1 & 0x40100) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
      iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
      if (((iVar3 == 0) || (*(char *)((int)_DAT_ram_3fcdfb20 + 0x119) != '\0')) &&
         ((_DAT_ram_3fcc4018 != 0 || ((iVar4 != 0 && (*(int *)(iVar4 + 0xe4) != 0)))))) {
        if ((*_DAT_ram_3fcdfb20 & 0x4000) == 0) {
          uVar8 = _DAT_ram_3fcdfb20[0xc];
        }
        else {
          uVar8 = _DAT_ram_3fcdfb20[0xe];
        }
        if (0x1e < uVar8) {
          iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
          if (((iVar4 != 0) && (*(char *)((int)_DAT_ram_3fcdfb20 + 0x119) != '\0')) && (iVar2 != 0))
          {
            uVar9 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
            FUN_ram_42094686((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1);
          }
          FUN_ram_420798d2();
          FUN_ram_4207a038(1,8,5,
                           "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..." /* TRUNCATED STRING LITERAL */
                          );
          FUN_ram_420915d6();
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
                    (_DAT_ram_3fcdfb20 + 6,(char)_DAT_ram_3fcdfb20[0x46],0);
          FUN_ram_4208d724(1);
          return;
        }
      }
      FUN_ram_4039beb4();
      FUN_ram_4208efc0();
      return;
    }
    if ((*puVar1 & 0x200) == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
    }
    pcVar6 = 
    "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..." /* TRUNCATED STRING LITERAL */
    ;
    uVar5 = 5;
  }
  FUN_ram_4207a038(1,8,uVar5,pcVar6);
  uVar5 = 0;
LAB_ram_4208f368:
  FUN_ram_4208ed48(0,uVar5);
  return;
}

