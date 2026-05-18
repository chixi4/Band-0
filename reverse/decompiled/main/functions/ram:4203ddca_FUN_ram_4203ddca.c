
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ddca(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3e0))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3b4))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x2fc))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x54c))();
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar1);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x530))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x58c))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x324))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x6b0))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x98))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x24);
  iVar2 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0xc) = 0x707;
  (**(code **)(iVar2 + 0x3ac))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xb74))();
  (**(code **)(_DAT_ram_3fcdfed0 + 900))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xf8))(0);
  (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcdff6c + 6,0,6);
  (**(code **)(_DAT_ram_3fcdfecc + 0x244))();
  (**(code **)(_DAT_ram_3fcdfecc + 500))();
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
                (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
                *(undefined1 *)(_DAT_ram_3fcdff6c + 0xc) = 0;
              }
            }
          }
        }
      }
    }
  }
  if ((_DAT_ram_3fcdfea8 != (undefined4 *)0x0) && ((code *)*_DAT_ram_3fcdfea8 != (code *)0x0)) {
    (*(code *)*_DAT_ram_3fcdfea8)(0xff,8,0);
  }
  (**(code **)(_DAT_ram_3fcdfed0 + 0x2c4))();
                    /* WARNING: Could not recover jumptable at 0x4203df26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfed0 + 0x400))();
  return;
}

