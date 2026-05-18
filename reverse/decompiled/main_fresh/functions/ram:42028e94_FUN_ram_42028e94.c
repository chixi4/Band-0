
undefined4 FUN_ram_42028e94(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  byte bStack_29;
  undefined4 auStack_28 [6];
  
  iVar1 = FUN_ram_4203069a();
  if (iVar1 == 0xffff) {
    uVar3 = 7;
  }
  else {
    iVar2 = (*(code *)&SUB_ram_400119f4)(*param_2,0,1,&bStack_29);
    uVar3 = 10;
    if (iVar2 == 0) {
      (*(code *)&SUB_ram_400119dc)(*param_2,1);
      uVar3 = 8;
      if (bStack_29 < 0xf) {
        pcVar4 = *(code **)(
                           "Fv8BAGHj8AfwAAAQABbBCwBh4PAH8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
                           + (uint)bStack_29 * 4 + 0xb4);
        uVar3 = 8;
        if (pcVar4 != (code *)0x0) {
          (*(code *)&SUB_ram_40010488)(auStack_28,0,0x18);
          (*pcVar4)(iVar1,param_2,auStack_28);
          FUN_ram_42028608(iVar1,auStack_28,bStack_29 != 5);
          uVar3 = auStack_28[0];
        }
      }
    }
  }
  return uVar3;
}

