
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203dbf2(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(_DAT_ram_3fcdfed0 + 0x400))();
  pcVar1 = *(code **)(_DAT_ram_3fcdfed0 + 0x484);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  (*pcVar1)(*(undefined1 *)(iVar2 + 0x10));
  (**(code **)(_DAT_ram_3fcdfecc + 0x3c))
            (*(undefined4 *)(_DAT_ram_3fcdfecc + 0x748),0,*(undefined4 *)(_DAT_ram_3fcdfecc + 0x728)
             ,0);
  (**(code **)(_DAT_ram_3fcdfecc + 0x7b8))();
  do {
    iVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0x20))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10);
    if (iVar2 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0xad0))();
      (**(code **)(_DAT_ram_3fcdfed0 + 0x564))();
    }
    pcVar1 = *(code **)(_DAT_ram_3fcdfec4 + 0x10);
    iVar2 = *(int *)(_DAT_ram_3fcdff6c + 0x1c);
    uVar3 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa8))();
    iVar2 = (*pcVar1)(iVar2 + 0x10,uVar3);
    if (iVar2 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x2f2,&DAT_ram_3c0f6d58,0,0);
    }
    (**(code **)(_DAT_ram_3fcdfec4 + 0x1c))(iVar2);
  } while( true );
}

