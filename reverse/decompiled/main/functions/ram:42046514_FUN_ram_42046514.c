
undefined1 * FUN_ram_42046514(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = (iVar3 + 1) * 0xc;
  puVar1 = (undefined1 *)FUN_ram_4039c08e(1,iVar2);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 1;
    *(int *)(puVar1 + 8) = iVar3;
    FUN_ram_4039c11e(puVar1 + 0xc,param_1 + 1,iVar2 + -0xc);
    FUN_ram_40398e0e(0x4203622a," polite in social time without overinvesting.",0x1000,puVar1,5,
                     puVar1 + 4,0x7fffffff);
  }
  return puVar1;
}

