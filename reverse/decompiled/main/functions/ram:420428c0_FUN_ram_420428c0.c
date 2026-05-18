
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_420428c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  piVar2 = (int *)(**(code **)(_DAT_ram_3fcdfecc + 0x94c))(0x23,0x24);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar3 = (undefined1 *)*piVar2;
  puVar5 = puVar3 + 1;
  if (param_2 == 6) {
    iVar1 = 0xf;
    (**(code **)(_DAT_ram_3fcdfecc + 0x3fc))(param_1,puVar5,0);
    uVar4 = 0xf;
    goto LAB_ram_420429a6;
  }
  if (param_2 < 7) {
    if (param_2 == 2) {
      if (*(char *)(param_1 + 0x118) == '\x02') {
        iVar1 = 10;
        uVar4 = 10;
      }
      else {
        iVar1 = 3;
        uVar4 = 3;
        (**(code **)(_DAT_ram_3fcdfecc + 0x41c))(param_1,puVar5);
      }
      goto LAB_ram_420429a6;
    }
    if (2 < param_2) {
      if (param_2 == 4) {
        iVar1 = 0xc;
        uVar4 = 0xc;
        (**(code **)(_DAT_ram_3fcdfecc + 0x4c8))(param_1,puVar5);
      }
      else if (param_2 < 5) {
        if (*(char *)(param_1 + 0xb) == '\x01') {
          iVar1 = 8;
          uVar4 = 8;
        }
        else {
          iVar1 = 0xe;
          uVar4 = 0xe;
        }
        uVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0xd8))();
        (**(code **)(_DAT_ram_3fcdfecc + 0x838))
                  (puVar5,(uint)uVar6 & 0xf7ffffff,(int)((ulonglong)uVar6 >> 0x20));
      }
      else {
        iVar1 = 2;
        uVar4 = 2;
        puVar3[1] = *(undefined1 *)(param_1 + 0x51);
      }
      goto LAB_ram_420429a6;
    }
    if (param_2 == 0) {
      iVar1 = 0;
      (**(code **)(_DAT_ram_3fcdfecc + 0x408))(param_1,puVar5,0);
      uVar4 = 0;
      goto LAB_ram_420429a6;
    }
    if (param_2 == 1) {
      iVar1 = 1;
      uVar4 = 1;
      (**(code **)(_DAT_ram_3fcdfecc + 0x3f4))(param_1,puVar5);
      goto LAB_ram_420429a6;
    }
  }
  else {
    if (param_2 == 9) {
      iVar1 = 0x16;
      uVar4 = 0x16;
      (**(code **)(_DAT_ram_3fcdfecc + 0x430))(param_1,puVar5);
      goto LAB_ram_420429a6;
    }
    if (param_2 < 10) {
      if (param_2 == 7) {
        iVar1 = 0x12;
        uVar4 = 0x12;
        goto LAB_ram_420429a6;
      }
      if (param_2 == 8) {
        iVar1 = 0x14;
        uVar4 = 0x14;
        (**(code **)(_DAT_ram_3fcdfecc + 0x40c))(param_1,puVar3);
        goto LAB_ram_420429a6;
      }
    }
    else {
      if (param_2 == 0xc) {
        iVar1 = 0x28;
        uVar4 = 0x28;
        (**(code **)(_DAT_ram_3fcdfecc + 0xa9c))(param_1,puVar5);
        goto LAB_ram_420429a6;
      }
      if (param_2 == 0xd) {
        iVar1 = 0x29;
        uVar4 = 0x29;
        (**(code **)(_DAT_ram_3fcdfecc + 0xaa0))(param_1,puVar5);
        goto LAB_ram_420429a6;
      }
      if (param_2 == 10) {
        iVar1 = 0x1d;
        (**(code **)(_DAT_ram_3fcdfecc + 0xa34))(param_1,puVar5,1);
        uVar4 = 0x1d;
        goto LAB_ram_420429a6;
      }
    }
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0xa3c,&DAT_ram_3c0f6e28,0,0);
  iVar1 = 0;
  uVar4 = 0;
LAB_ram_420429a6:
  *puVar3 = uVar4;
  (**(code **)(_DAT_ram_3fcdfecc + 0x37c))
            (param_1,piVar2,3,*(char *)(*(int *)(_DAT_ram_3fcdff6c + 0x10) + iVar1) + '\x01',
             *(code **)(_DAT_ram_3fcdfecc + 0x37c));
  return piVar2;
}

