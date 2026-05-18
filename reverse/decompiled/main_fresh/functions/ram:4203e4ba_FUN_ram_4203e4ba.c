
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e4ba(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_28;
  undefined1 auStack_27 [11];
  
  FUN_ram_4039c11e(*(undefined4 *)(_DAT_ram_3fcdff6c + 0x18),&DAT_ram_3c0f6d78,8);
  FUN_ram_4039c11e(*(undefined4 *)(_DAT_ram_3fcdff6c + 0x14),0x3ff4fd2c,0x10);
  FUN_ram_4039c11e(*(undefined4 *)(_DAT_ram_3fcdff6c + 0x10),&DAT_ram_3c0f6eec,0x23);
  FUN_ram_4039c11e(*(int *)(_DAT_ram_3fcdff6c + 0x10) + 0x23,&DAT_ram_3c0f6ee4,7);
  pcVar6 = *(code **)(_DAT_ram_3fcdfed0 + 0x2e0);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar3 = _DAT_ram_3fcdff6c;
  uVar1 = (*pcVar6)(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c));
  iVar2 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(iVar3 + 0x24) = uVar1;
  iVar3 = _DAT_ram_3fcdff6c;
  pcVar6 = *(code **)(iVar2 + 0xa14);
  iVar2 = (**(code **)(iVar2 + 0x114))();
  (*pcVar6)(iVar3 + 0x2c,iVar3 + 0x28,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c));
  pcVar6 = *(code **)(_DAT_ram_3fcdfecc + 0xa18);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar3 = _DAT_ram_3fcdff6c;
  uVar1 = (*pcVar6)(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c));
  iVar2 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(iVar3 + 0x26) = uVar1;
  iVar2 = (**(code **)(iVar2 + 0x114))();
  if (0xfe < *(ushort *)(iVar2 + 0x38)) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x63b,&DAT_ram_3c0f6d68,0,0,*(ushort *)(iVar2 + 0x38),
               *(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if (0xff < *(ushort *)(iVar2 + 0xc)) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x640,&DAT_ram_3c0f6d68,0,0,*(ushort *)(iVar2 + 0xc),
               *(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if (*(ushort *)(iVar2 + 0x20) < 0x15) {
    *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 7;
  }
  else {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (*(ushort *)(iVar2 + 0x20) < 0x1f) {
      *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 6;
    }
    else {
      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      if (*(ushort *)(iVar2 + 0x20) < 0x33) {
        *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 5;
      }
      else {
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        if (*(ushort *)(iVar2 + 0x20) < 0x4c) {
          *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 4;
        }
        else {
          iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
          if (*(ushort *)(iVar2 + 0x20) < 0x65) {
            *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 3;
          }
          else {
            iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
            if (*(ushort *)(iVar2 + 0x20) < 0x97) {
              *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 2;
            }
            else {
              iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
              if (*(ushort *)(iVar2 + 0x20) < 0xfb) {
                *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 1;
              }
              else {
                iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
                if (*(ushort *)(iVar2 + 0x20) < 0x1f5) {
                  *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 0;
                }
                else {
                  (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                            (0x658,&DAT_ram_3c0f6d68,0,0,*(ushort *)(iVar2 + 0x20),
                             *(code **)(_DAT_ram_3fcdfecc + 0x110));
                }
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(_DAT_ram_3fcdfed0 + 0x420))();
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x9e0))(_DAT_ram_3fcdff6c);
  if (iVar2 != 0) {
    uStack_38 = 0x1e;
    uStack_34 = 0;
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x9e0))(&uStack_38);
    if (iVar2 == 0) {
      uStack_30 = 0x1e;
      uStack_2c = 0;
      FUN_ram_4039c11e(_DAT_ram_3fcdff6c,&uStack_30,6);
    }
    else {
      iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x4d8))(&uStack_28);
      if (iVar2 == 0) {
        FUN_ram_4039c11e(_DAT_ram_3fcdff6c,auStack_27,6);
      }
    }
  }
  (**(code **)(_DAT_ram_3fcdfed0 + 0x53c))();
  iVar2 = _DAT_ram_3fcdfecc;
  iVar5 = *(int *)(_DAT_ram_3fcdff6c + 0x1c);
  *(undefined2 *)(iVar5 + 0xe) = 0;
  iVar3 = (**(code **)(iVar2 + 0x114))();
  iVar2 = _DAT_ram_3fcdfecc;
  *(char *)(iVar5 + 9) = (char)*(undefined2 *)(iVar3 + 0x3e);
  iVar2 = (**(code **)(iVar2 + 0x114))();
  pcVar6 = *(code **)(_DAT_ram_3fcdfec4 + 8);
  *(undefined2 *)(iVar5 + 10) = *(undefined2 *)(iVar2 + 0x3c);
  (*pcVar6)(iVar5 + 0x10);
  iVar2 = _DAT_ram_3fcdfecc;
  uVar4 = *(undefined4 *)(_DAT_ram_3fcdfecc + 0x94);
  pcVar6 = *(code **)(_DAT_ram_3fcdfec4 + 0x24);
  *(int *)(iVar5 + 0x28) = iVar5 + 0x24;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  (*pcVar6)(iVar5 + 0x20,uVar4,0,iVar2,iVar5 + 0x24,pcVar6);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x24))(iVar5 + 0x2c,*(undefined4 *)(_DAT_ram_3fcdfecc + 0x8c),0);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x24))(iVar5 + 0x30,*(undefined4 *)(_DAT_ram_3fcdfecc + 0x88),0);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x34,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfecc + 0xa8),0,_DAT_ram_3fcdfecc,
             *(code **)(_DAT_ram_3fcdfec4 + 0x60));
  (**(code **)(_DAT_ram_3fcdfecc + 0x7a4))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x768))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x2c8))();
  (**(code **)(_DAT_ram_3fcdfed0 + 900))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x558))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x2dc))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x3a8))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x87c))();
  pcVar6 = *(code **)(_DAT_ram_3fcdfecc + 0x888);
  (*(code *)&SUB_ram_40010ab0)();
  (*pcVar6)();
  (**(code **)(_DAT_ram_3fcdfecc + 0x88c))(0);
  (**(code **)(_DAT_ram_3fcdfecc + 0xba4))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x1d8))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xbdc))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x66c))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x7e4))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x7f8))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x328))();
  return;
}

