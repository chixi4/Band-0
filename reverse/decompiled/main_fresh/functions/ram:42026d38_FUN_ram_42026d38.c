
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42026d38(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  
  if (_DAT_ram_3fcb6b74 == (undefined2 *)0x0) {
    _DAT_ram_3fcb6b74 = (undefined2 *)FUN_ram_403a5e02(1,0xc);
  }
  puVar1 = _DAT_ram_3fcb6b74;
  _DAT_ram_3fcb6b74[1] = param_2;
  *puVar1 = param_1;
  iVar2 = FUN_ram_4203293e(
                          "IQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
                          );
  if ((iVar2 == 0) &&
     (iVar2 = FUN_ram_4203289e(
                              "IQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
                              ), iVar2 == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

