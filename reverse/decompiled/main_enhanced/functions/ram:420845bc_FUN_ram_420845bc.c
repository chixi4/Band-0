
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420845bc(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  code *pcVar7;
  
  iVar2 = FUN_ram_4208353e();
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0x18);
    if (puVar3 == (undefined1 *)0x0) {
      FUN_ram_42083512();
      FUN_ram_4207a038(6,2,1,&DAT_ram_3c0fee8c);
      iVar2 = 0x101;
    }
    else if (DAT_ram_3fcc305c == '\0') {
      DAT_ram_3fcc305c = 1;
      FUN_ram_42083512();
      FUN_ram_420891ce();
      *puVar3 = 2;
      *(undefined4 *)(puVar3 + 4) = 0x42071ba0;
      puVar3[8] = 0;
      iVar2 = FUN_ram_42082b56(puVar3);
      if (iVar2 != 0x3001) {
        if (iVar2 == 0x3002) {
          iVar2 = 0;
        }
        else {
          uVar1 = 0;
          do {
            puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0x18);
            if (puVar3 == (undefined1 *)0x0) {
              puVar6 = &DAT_ram_3c0feea8;
              uVar5 = 0x40;
              uVar4 = 6;
              goto LAB_ram_420846b2;
            }
            *puVar3 = 2;
            puVar3[8] = 1;
            *(undefined4 *)(puVar3 + 4) = 0x42071ba0;
            iVar2 = FUN_ram_42082b56();
            if (iVar2 == 0) goto LAB_ram_42084718;
            uVar1 = uVar1 + 1;
            pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x9c);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xa0))(10);
            (*pcVar7)();
            if (uVar1 % 500 == 0) {
              FUN_ram_4207a038(6,0x40,2,&DAT_ram_3c101df0,uVar1,_DAT_ram_60047ca0);
            }
          } while (uVar1 != 500);
          FUN_ram_4207a038(6,0x40,2,&DAT_ram_3c101e14);
LAB_ram_42084718:
          puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0x18);
          if (puVar3 == (undefined1 *)0x0) {
            puVar6 = &DAT_ram_3c0feecc;
            uVar5 = 2;
            uVar4 = 1;
LAB_ram_420846b2:
            FUN_ram_4207a038(uVar4,uVar5,1,puVar6);
            iVar2 = 0x101;
          }
          else {
            *puVar3 = 2;
            puVar3[8] = 2;
            *(undefined4 *)(puVar3 + 4) = 0x42071ba0;
            iVar2 = FUN_ram_42082b56();
          }
        }
      }
      FUN_ram_4208353e();
      DAT_ram_3fcc305c = '\0';
      FUN_ram_42083512();
    }
    else {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      FUN_ram_42083512();
      iVar2 = 0x3014;
    }
  }
  return iVar2;
}

