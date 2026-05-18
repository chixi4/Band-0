
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42046928(undefined4 param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  char cVar13;
  undefined8 uVar14;
  undefined2 uStack_34;
  
  iVar7 = _DAT_ram_3fcb4f84;
  FUN_ram_42033fd8(1,8,4,0x3c07c7ec,param_1,param_2,*(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x46));
  iVar5 = (*(code *)&SUB_ram_40011d40)();
  FUN_ram_42048fbe(iVar5 << 2);
  iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if ((iVar6 != 0) && (iVar5 == 0)) {
    (*(code *)&SUB_ram_40011ee4)();
  }
  puVar1 = _DAT_ram_3fcdfb20;
  bVar11 = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46);
  if ((bVar11 & 8) == 0) {
    if ((bVar11 & 2) != 0) {
      bVar11 = bVar11 & 0xfd;
      goto LAB_ram_420469a8;
    }
  }
  else {
    bVar11 = bVar11 & 0xf7;
LAB_ram_420469a8:
    *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = bVar11;
  }
  if (((*(char *)(*(int *)(gp + -0x2b8) + 0x35c) == '\0') &&
      ((*(byte *)((int)puVar1 + 0x46) & 4) != 0)) && (*(char *)((int)puVar1 + 0x47) == '\0')) {
    uVar10 = 0x3c07c818;
    uVar9 = 4;
  }
  else {
    if (param_2 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
      *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 0xfb;
      FUN_ram_42033fd8(1,8,4,0x3c07c83c);
      uVar9 = 1;
      goto LAB_ram_42046a18;
    }
    if ((*puVar1 & 0x40100) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
      iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
      if (((iVar6 == 0) || (*(char *)((int)_DAT_ram_3fcdfb20 + 0x119) != '\0')) &&
         ((_DAT_ram_3fcb4f88 != 0 || ((iVar7 != 0 && (*(int *)(iVar7 + 0xe4) != 0)))))) {
        if ((*_DAT_ram_3fcdfb20 & 0x4000) == 0) {
          uVar12 = _DAT_ram_3fcdfb20[0xc];
        }
        else {
          uVar12 = _DAT_ram_3fcdfb20[0xe];
        }
        if (0x1e < uVar12) {
          iVar7 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
          if (((iVar7 != 0) && (*(char *)((int)_DAT_ram_3fcdfb20 + 0x119) != '\0')) && (iVar5 != 0))
          {
            uVar14 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
            FUN_ram_4204bc6e((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1);
          }
          FUN_ram_42033eb8();
          FUN_ram_42033fd8(1,8,5,0x3c07f2ac);
          FUN_ram_42048bce();
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
                    (_DAT_ram_3fcdfb20 + 6,(char)_DAT_ram_3fcdfb20[0x46],0);
          FUN_ram_42044f76(1);
          return;
        }
      }
      FUN_ram_40399aee();
      cVar13 = *(char *)((int)_DAT_ram_3fcdfb20 + 0x9b);
      uStack_34 = 0;
      if (cVar13 == -1) {
        cVar13 = '\0';
      }
      do {
        if ((uint)(byte)_DAT_ram_3fcdfb20[0x12] <= (uint)*(byte *)((int)_DAT_ram_3fcdfb20 + 0x45)) {
          cVar2 = -1;
LAB_ram_42046724:
          uStack_34._0_1_ = cVar2;
          if (cVar2 == -1) {
            FUN_ram_420463f8(0,0);
          }
          else if (_DAT_ram_3fcb4f84 == 0) {
            FUN_ram_42033fd8(1,8,2,"492-dirty");
          }
          else {
            if ((*_DAT_ram_3fcdfb20 & 0x4000) == 0) {
              iVar7 = FUN_ram_420434ba(cVar2);
              if (iVar7 == 0) {
                uVar3 = _DAT_ram_3fcdfb20[0xe];
                uVar12 = uVar3;
              }
              else {
                uVar3 = _DAT_ram_3fcdfb20[0xd];
                uVar12 = _DAT_ram_3fcdfb20[0xc];
              }
            }
            else {
              uVar3 = _DAT_ram_3fcdfb20[0xe];
              uVar12 = uVar3;
            }
            DAT_ram_3fcb5341 = uStack_34._1_1_;
            *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 8;
            DAT_ram_3fcb5340 = (char)uStack_34;
            FUN_ram_42033fd8(1,8,4,0x3c07c7b4);
            FUN_ram_40392eec(0xe,2);
            FUN_ram_42048fbe(1);
            uVar14 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
            uVar8 = uVar12;
            if ((int)uVar14 != 0) {
              (*(code *)&SUB_ram_40011ee4)((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12);
              uVar3 = 0;
              iVar7 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1bc))();
              uVar8 = iVar7 * 10;
              if (0x78 < uVar12) {
                uVar8 = (uVar12 * uVar8) / 0x78;
              }
            }
            FUN_ram_42033e6c(&uStack_34,uVar3,uVar8,0x42034a5a,0x42036928,&DAT_ram_3fcb5340);
          }
          return;
        }
        cVar2 = *(char *)(_DAT_ram_3fcdfb20[0x13] + (uint)*(byte *)((int)_DAT_ram_3fcdfb20 + 0x45));
        iVar7 = FUN_ram_42043448(cVar2);
        if (iVar7 != 0) {
          iVar7 = FUN_ram_42033ada(cVar2);
          if (iVar7 == 0) {
            FUN_ram_42033fd8(1,0x800,1,0x3c07dcd0,0x3c072f20,0x4c7);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (((((*(uint *)(iVar7 + 8) & 3) == 3) &&
               (((*_DAT_ram_3fcdfb20 & 0x800) == 0 ||
                (pcVar4 = (char *)FUN_ram_420339fc(), *pcVar4 != cVar2)))) &&
              (((*_DAT_ram_3fcdfb20 & 0x8000) == 0 || (cVar2 == cVar13)))) &&
             (((*_DAT_ram_3fcdfb20 & 0x10000) == 0 || ((*(uint *)(iVar7 + 8) & 0x200) == 0)))) {
            *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) =
                 *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) + '\x01';
            goto LAB_ram_42046724;
          }
        }
        *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) = *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) + '\x01'
        ;
      } while( true );
    }
    if ((*puVar1 & 0x200) == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
    }
    uVar10 = 0x3c07f2c0;
    uVar9 = 5;
  }
  FUN_ram_42033fd8(1,8,uVar9,uVar10);
  uVar9 = 0;
LAB_ram_42046a18:
  FUN_ram_420463f8(0,uVar9);
  return;
}

