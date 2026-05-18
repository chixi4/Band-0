
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203c5b0(undefined4 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  
  (**(code **)(_DAT_ram_3fcdfed0 + 0x544))();
  puVar1 = (uint *)(**(code **)(_DAT_ram_3fcdfec4 + 0x34))(param_1);
  if (puVar1 == (uint *)0x0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x556,&DAT_ram_3c0f6c3c,0,0);
  }
  uVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  if (((*(char *)((int)puVar1 + 0xb) == '\x02') &&
      (iVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x5d8))(puVar1), iVar3 != 0)) &&
     (iVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(puVar1 + 0x3e), iVar3 == 0)) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xb6c))
              (puVar1,(uint)(ushort)puVar1[0x18] - (uint)*(ushort *)((int)puVar1 + 0x5e));
    puVar1[0x25] = puVar1[0x24];
    *(char *)((int)puVar1 + 0x99) = (char)puVar1[0x26];
    *(undefined2 *)(puVar1 + 0x18) = *(undefined2 *)((int)puVar1 + 0x5e);
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar2);
  if (*(char *)((int)puVar1 + 10) == '\0') {
    return;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
            (0x701b,(short)puVar1[2],*(undefined2 *)((int)puVar1 + 0x5e));
  if ((_DAT_ram_3fcdfe70 != 0) && (*(int *)(_DAT_ram_3fcdfe70 + 0x14) != 0)) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x25c))(puVar1,3);
  }
  if (*(char *)((int)puVar1 + 0xf9) == '\0') {
    iVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x21c))(puVar1);
    if (iVar3 != 0) {
      return;
    }
    if ((_DAT_ram_3fcdfe70 != 0) && (*(int *)(_DAT_ram_3fcdfe70 + 0x14) != 0)) {
      (**(code **)(_DAT_ram_3fcdfed0 + 0x25c))(puVar1,1);
    }
  }
  if ((*puVar1 & 2) == 0) {
    if ((*puVar1 & 0xc) != 0xc) {
      (**(code **)(_DAT_ram_3fcdfec4 + 0x18))
                (*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,puVar1 + 0x2f);
      (**(code **)(_DAT_ram_3fcdfed0 + 0x1fc))(puVar1);
      (**(code **)(_DAT_ram_3fcdfecc + 0x3f8))(puVar1);
      (**(code **)(_DAT_ram_3fcdfecc + 0xa24))(puVar1);
      (**(code **)(_DAT_ram_3fcdfecc + 0x180))(puVar1);
      if ((*puVar1 & 0x30000000) != 0x30000000) {
        return;
      }
      (**(code **)(_DAT_ram_3fcdfecc + 0x700))(puVar1,0);
      *puVar1 = *puVar1 & 0xdfffffff;
      return;
    }
    cVar4 = *(char *)((int)puVar1 + 0x52);
    if (cVar4 == '\0') {
      cVar4 = '\x13';
    }
  }
  else {
    cVar4 = '\x16';
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x701c,(short)puVar1[2],cVar4);
                    /* WARNING: Could not recover jumptable at 0x4203c794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfed0 + 0x228))(puVar1,cVar4);
  return;
}

