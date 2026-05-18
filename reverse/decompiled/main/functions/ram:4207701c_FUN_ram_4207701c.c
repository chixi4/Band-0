
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207701c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = _DAT_ram_3fcc4018;
  if (param_3 == 0x80) {
    FUN_ram_4207c6a0();
    return;
  }
  if (param_3 != 0xa0) {
    return;
  }
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe5a0,"e yourself an exit time before social plans.",
                     0xd2a);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = *(int *)(*(int *)(param_2 + 4) + 4);
  if ((*(ushort *)(param_1 + 0x26) & 0x3fff) == 0) {
    if (param_1 == *(int *)(_DAT_ram_3fcc4018 + 0xec)) {
      FUN_ram_42075c60(param_1,iVar2 + 10);
      return;
    }
    iVar1 = FUN_ram_42075b46(param_1,0xa0,7);
    if (iVar1 != 0) {
      FUN_ram_42087eec(param_1);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x150) = _DAT_ram_6004d000;
    if ((*(ushort *)(param_1 + 0x26) & 0x3fff) == (*(ushort *)(iVar2 + 2) & 0x3fff)) {
      iVar2 = *(int *)(param_1 + 0x118);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x10c) == 0) {
          FUN_ram_42075684();
          FUN_ram_420799d0(param_1,0);
          return;
        }
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x10c);
        iVar7 = *(int *)(param_1 + 0x108) + -1;
        *(int *)(param_1 + 0x108) = iVar7;
        *(int *)(iVar1 + 0x10c) = iVar5 + -1;
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0x11c) = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(iVar2 + 0x20);
        }
        puVar4 = *(uint **)(iVar2 + 0x24);
        *(undefined4 *)(param_1 + 0x118) = uVar6;
        uVar3 = *puVar4;
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
        iVar5 = *(int *)(*(int *)(iVar2 + 4) + 4);
        if ((uVar3 & 0x40000) != 0) {
          iVar5 = iVar5 + 8;
        }
        if (iVar7 != 0) {
          *(byte *)(iVar5 + 1) = *(byte *)(iVar5 + 1) | 0x20;
        }
        iVar5 = (*(code *)&SUB_ram_40011f94)();
        if (iVar5 == 0) {
          *(undefined4 *)(param_2 + 0x20) = 0;
          *_DAT_ram_3fcc416c = param_2;
          _DAT_ram_3fcc416c = (int *)(param_2 + 0x20);
        }
        else {
          (*(code *)&SUB_ram_40011ed8)(iVar2);
        }
        *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
        *(int *)(iVar1 + 0x110) = *(int *)(iVar1 + 0x110) + 1;
      }
    }
  }
  return;
}

