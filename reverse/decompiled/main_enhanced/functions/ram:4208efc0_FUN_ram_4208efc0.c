
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208efc0(void)

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
  
  cVar7 = *(char *)((int)_DAT_ram_3fcdfb20 + 0x9b);
  uStack_34 = 0;
  if (cVar7 == -1) {
    cVar7 = '\0';
  }
  do {
    if ((uint)(byte)_DAT_ram_3fcdfb20[0x12] <= (uint)*(byte *)((int)_DAT_ram_3fcdfb20 + 0x45)) {
      cVar1 = -1;
LAB_ram_4208f074:
      uStack_34._0_1_ = cVar1;
      if (cVar1 == -1) {
        FUN_ram_4208ed48(0,0);
      }
      else if (_DAT_ram_3fcc4014 == 0) {
        FUN_ram_4207a038(1,8,2,&DAT_ram_3c10216c);
      }
      else {
        if ((*_DAT_ram_3fcdfb20 & 0x4000) == 0) {
          iVar4 = FUN_ram_4208ba7c(cVar1);
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
        DAT_ram_3fcc43cd = uStack_34._1_1_;
        *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 8;
        DAT_ram_3fcc43cc = (char)uStack_34;
        FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdc64);
        FUN_ram_40393cee(0xe,2);
        FUN_ram_420919c6(1);
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
        FUN_ram_42079886(&uStack_34,uVar2,uVar5,0x4207d168,0x4207f278,&DAT_ram_3fcc43cc);
      }
      return;
    }
    cVar1 = *(char *)(_DAT_ram_3fcdfb20[0x13] + (uint)*(byte *)((int)_DAT_ram_3fcdfb20 + 0x45));
    iVar4 = FUN_ram_4208b9e8(cVar1);
    if (iVar4 != 0) {
      iVar4 = FUN_ram_420794ea(cVar1);
      if (iVar4 == 0) {
        FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0ff488,"lationship before overgiving.",0x4c7);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (((((*(uint *)(iVar4 + 8) & 3) == 3) &&
           (((*_DAT_ram_3fcdfb20 & 0x800) == 0 ||
            (pcVar3 = (char *)FUN_ram_4207940a(), *pcVar3 != cVar1)))) &&
          (((*_DAT_ram_3fcdfb20 & 0x8000) == 0 || (cVar1 == cVar7)))) &&
         (((*_DAT_ram_3fcdfb20 & 0x10000) == 0 || ((*(uint *)(iVar4 + 8) & 0x200) == 0)))) {
        *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) = *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) + '\x01'
        ;
        goto LAB_ram_4208f074;
      }
    }
    *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) = *(char *)((int)_DAT_ram_3fcdfb20 + 0x45) + '\x01';
  } while( true );
}

