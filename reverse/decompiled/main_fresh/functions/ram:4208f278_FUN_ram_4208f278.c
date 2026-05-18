
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208f278(undefined4 param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  byte bVar10;
  uint uVar11;
  char cVar12;
  undefined8 uVar13;
  undefined2 uStack_34;
  
  iVar6 = _DAT_ram_3fcc4014;
  FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdc9c,param_1,param_2,
                   *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x46));
  iVar4 = (*(code *)&SUB_ram_40011d40)();
  FUN_ram_420919c6(iVar4 << 2);
  iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if ((iVar5 != 0) && (iVar4 == 0)) {
    (*(code *)&SUB_ram_40011ee4)();
  }
  puVar1 = _DAT_ram_3fcdfb20;
  bVar10 = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46);
  if ((bVar10 & 8) == 0) {
    if ((bVar10 & 2) != 0) {
      bVar10 = bVar10 & 0xfd;
      goto LAB_ram_4208f2f8;
    }
  }
  else {
    bVar10 = bVar10 & 0xf7;
LAB_ram_4208f2f8:
    *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = bVar10;
  }
  if (((*(char *)(*(int *)(gp + -0xb4) + 0x35c) == '\0') &&
      ((*(byte *)((int)puVar1 + 0x46) & 4) != 0)) && (*(char *)((int)puVar1 + 0x47) == '\0')) {
    pcVar9 = &DAT_ram_3c0fdcc8;
    uVar8 = 4;
  }
  else {
    if (param_2 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
      *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 0xfb;
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdcec);
      uVar8 = 1;
      goto LAB_ram_4208f368;
    }
    if ((*puVar1 & 0x40100) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
      iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
      if (((iVar5 == 0) || (*(char *)((int)_DAT_ram_3fcdfb20 + 0x119) != '\0')) &&
         ((_DAT_ram_3fcc4018 != 0 || ((iVar6 != 0 && (*(int *)(iVar6 + 0xe4) != 0)))))) {
        if ((*_DAT_ram_3fcdfb20 & 0x4000) == 0) {
          uVar11 = _DAT_ram_3fcdfb20[0xc];
        }
        else {
          uVar11 = _DAT_ram_3fcdfb20[0xe];
        }
        if (0x1e < uVar11) {
          iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
          if (((iVar6 != 0) && (*(char *)((int)_DAT_ram_3fcdfb20 + 0x119) != '\0')) && (iVar4 != 0))
          {
            uVar13 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
            FUN_ram_42094686((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1);
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
      cVar12 = *(char *)((int)_DAT_ram_3fcdfb20 + 0x9b);
      uStack_34 = 0;
      if (cVar12 == -1) {
        cVar12 = '\0';
      }
      do {
        if ((uint)(byte)_DAT_ram_3fcdfb20[0x12] <= (uint)*(byte *)((int)_DAT_ram_3fcdfb20 + 0x45)) {
          cVar2 = -1;
LAB_ram_4208f074:
          uStack_34._0_1_ = cVar2;
          if (cVar2 == -1) {
            FUN_ram_4208ed48(0,0);
          }
          else if (_DAT_ram_3fcc4014 == 0) {
            FUN_ram_4207a038(1,8,2,&DAT_ram_3c10216c);
          }
          else {
            if ((*_DAT_ram_3fcdfb20 & 0x4000) == 0) {
              iVar6 = FUN_ram_4208ba7c(cVar2);
              if (iVar6 == 0) {
                uVar3 = _DAT_ram_3fcdfb20[0xe];
                uVar11 = uVar3;
              }
              else {
                uVar3 = _DAT_ram_3fcdfb20[0xd];
                uVar11 = _DAT_ram_3fcdfb20[0xc];
              }
            }
            else {
              uVar3 = _DAT_ram_3fcdfb20[0xe];
              uVar11 = uVar3;
            }
            DAT_ram_3fcc43cd = uStack_34._1_1_;
            *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 8;
            DAT_ram_3fcc43cc = (char)uStack_34;
            FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdc64);
            FUN_ram_40393cee(0xe,2);
            FUN_ram_420919c6(1);
            uVar13 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
            uVar7 = uVar11;
            if ((int)uVar13 != 0) {
              (*(code *)&SUB_ram_40011ee4)((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar11);
              uVar3 = 0;
              iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1bc))();
              uVar7 = iVar6 * 10;
              if (0x78 < uVar11) {
                uVar7 = (uVar11 * uVar7) / 0x78;
              }
            }
            FUN_ram_42079886(&uStack_34,uVar3,uVar7,0x4207d168,0x4207f278,&DAT_ram_3fcc43cc);
          }
          return;
        }
        cVar2 = *(char *)(_DAT_ram_3fcdfb20[0x13] + (uint)*(byte *)((int)_DAT_ram_3fcdfb20 + 0x45));
        iVar6 = FUN_ram_4208b9e8(cVar2);
        if (iVar6 != 0) {
          iVar6 = FUN_ram_420794ea(cVar2);
          if (iVar6 == 0) {
            FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0ff488,"lationship before overgiving.",0x4c7);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (((((*(uint *)(iVar6 + 8) & 3) == 3) &&
               (((*_DAT_ram_3fcdfb20 & 0x800) == 0 ||
                (pcVar9 = (char *)FUN_ram_4207940a(), *pcVar9 != cVar2)))) &&
              (((*_DAT_ram_3fcdfb20 & 0x8000) == 0 || (cVar2 == cVar12)))) &&
             (((*_DAT_ram_3fcdfb20 & 0x10000) == 0 || ((*(uint *)(iVar6 + 8) & 0x200) == 0)))) {
            *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) =
                 *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) + '\x01';
            goto LAB_ram_4208f074;
          }
        }
        *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) = *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) + '\x01'
        ;
      } while( true );
    }
    if ((*puVar1 & 0x200) == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar1 + 1);
    }
    pcVar9 = 
    "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..." /* TRUNCATED STRING LITERAL */
    ;
    uVar8 = 5;
  }
  FUN_ram_4207a038(1,8,uVar8,pcVar9);
  uVar8 = 0;
LAB_ram_4208f368:
  FUN_ram_4208ed48(0,uVar8);
  return;
}

