
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42046892(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined8 uVar8;
  undefined2 uStack_34;
  
  FUN_ram_42033fd8(1,8,5,0x3c07f550,param_1,*(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x46));
  if ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) == 0) {
    return;
  }
  if ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 10) != 0) {
    FUN_ram_42033fd8(1,8,5,0x3c07f580);
                    /* WARNING: Could not recover jumptable at 0x420468f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(_DAT_ram_3fcdfb20 + 1,0,0);
    return;
  }
  if ((*_DAT_ram_3fcdfb20 & 0x200) != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(_DAT_ram_3fcdfb20 + 1,_DAT_ram_3fcdfb20[0xb],0);
  }
  cVar7 = *(char *)((int)_DAT_ram_3fcdfb20 + 0x9b);
  uStack_34 = 0;
  if (cVar7 == -1) {
    cVar7 = '\0';
  }
  do {
    if ((uint)(byte)_DAT_ram_3fcdfb20[0x12] <= (uint)*(byte *)((int)_DAT_ram_3fcdfb20 + 0x45)) {
      cVar1 = -1;
LAB_ram_42046724:
      uStack_34._0_1_ = cVar1;
      if (cVar1 == -1) {
        FUN_ram_420463f8(0,0);
      }
      else if (_DAT_ram_3fcb4f84 == 0) {
        FUN_ram_42033fd8(1,8,2,"492-dirty");
      }
      else {
        if ((*_DAT_ram_3fcdfb20 & 0x4000) == 0) {
          iVar4 = FUN_ram_420434ba(cVar1);
          if (iVar4 == 0) {
            uVar2 = _DAT_ram_3fcdfb20[0xe];
            uVar6 = uVar2;
          }
          else {
            uVar2 = _DAT_ram_3fcdfb20[0xd];
            uVar6 = _DAT_ram_3fcdfb20[0xc];
          }
        }
        else {
          uVar2 = _DAT_ram_3fcdfb20[0xe];
          uVar6 = uVar2;
        }
        DAT_ram_3fcb5341 = uStack_34._1_1_;
        *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 8;
        DAT_ram_3fcb5340 = (char)uStack_34;
        FUN_ram_42033fd8(1,8,4,0x3c07c7b4);
        FUN_ram_40392eec(0xe,2);
        FUN_ram_42048fbe(1);
        uVar8 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
        uVar5 = uVar6;
        if ((int)uVar8 != 0) {
          (*(code *)&SUB_ram_40011ee4)((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6);
          uVar2 = 0;
          iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1bc))();
          uVar5 = iVar4 * 10;
          if (0x78 < uVar6) {
            uVar5 = (uVar6 * uVar5) / 0x78;
          }
        }
        FUN_ram_42033e6c(&uStack_34,uVar2,uVar5,0x42034a5a,0x42036928,&DAT_ram_3fcb5340);
      }
      return;
    }
    cVar1 = *(char *)(_DAT_ram_3fcdfb20[0x13] + (uint)*(byte *)((int)_DAT_ram_3fcdfb20 + 0x45));
    iVar4 = FUN_ram_42043448(cVar1);
    if (iVar4 != 0) {
      iVar4 = FUN_ram_42033ada(cVar1);
      if (iVar4 == 0) {
        FUN_ram_42033fd8(1,0x800,1,0x3c07dcd0,0x3c072f20,0x4c7);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (((((*(uint *)(iVar4 + 8) & 3) == 3) &&
           (((*_DAT_ram_3fcdfb20 & 0x800) == 0 ||
            (pcVar3 = (char *)FUN_ram_420339fc(), *pcVar3 != cVar1)))) &&
          (((*_DAT_ram_3fcdfb20 & 0x8000) == 0 || (cVar1 == cVar7)))) &&
         (((*_DAT_ram_3fcdfb20 & 0x10000) == 0 || ((*(uint *)(iVar4 + 8) & 0x200) == 0)))) {
        *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) = *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) + '\x01'
        ;
        goto LAB_ram_42046724;
      }
    }
    *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) = *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) + '\x01';
  } while( true );
}

