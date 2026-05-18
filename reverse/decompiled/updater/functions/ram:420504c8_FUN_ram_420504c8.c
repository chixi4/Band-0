
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420504c8(void)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *apuStack_24 [3];
  
  FUN_ram_42059a60(3);
  if (_DAT_ram_3fcb6798 != (code *)0x0) {
    (*_DAT_ram_3fcb6798)(_DAT_ram_3fcb6794);
  }
LAB_ram_420504f8:
  do {
    while (iVar3 = FUN_ram_42055aec(), iVar3 != -1) {
      if ((iVar3 != 0) && (iVar3 = FUN_ram_420598a0(0x3fcb6790,apuStack_24,iVar3), iVar3 != -1))
      goto LAB_ram_4205050e;
      FUN_ram_42055a92();
    }
    FUN_ram_420598a0(0x3fcb6790,apuStack_24,0);
LAB_ram_4205050e:
    puVar1 = apuStack_24[0];
  } while (apuStack_24[0] == (uint *)0x0);
  uVar5 = *apuStack_24[0];
  if (uVar5 == 3) {
    (*(code *)apuStack_24[0][1])(apuStack_24[0][2]);
    uVar4 = 7;
LAB_ram_4205053c:
    FUN_ram_4205151c(uVar4,puVar1);
    goto LAB_ram_420504f8;
  }
  if (uVar5 < 4) {
    if (uVar5 != 1) {
      if (uVar5 != 2) goto LAB_ram_42050590;
      iVar3 = (*(code *)apuStack_24[0][3])(apuStack_24[0][1],apuStack_24[0][2]);
      if (iVar3 != 0) {
        FUN_ram_42051d02(puVar1[1]);
      }
      uVar4 = 8;
      goto LAB_ram_4205053c;
    }
    puVar6 = (undefined1 *)apuStack_24[0][2];
    uVar2 = (*(code *)apuStack_24[0][1])(puVar6);
    *puVar6 = uVar2;
  }
  else {
    if (uVar5 == 4) {
LAB_ram_42050590:
      (*(code *)apuStack_24[0][1])(apuStack_24[0][2]);
      goto LAB_ram_420504f8;
    }
    if (uVar5 != 5) goto LAB_ram_420504f8;
    (*(code *)apuStack_24[0][1])(apuStack_24[0][2]);
  }
  thunk_FUN_ram_4205973a(puVar1[3]);
  goto LAB_ram_420504f8;
}

