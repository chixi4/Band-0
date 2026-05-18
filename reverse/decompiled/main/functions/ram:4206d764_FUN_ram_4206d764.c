
undefined4 FUN_ram_4206d764(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  FUN_ram_4206c928(&uStack_68);
  uStack_60 = 0x67452301;
  uStack_5c = 0xefcdab89;
  uStack_58 = 0x98badcfe;
  uStack_54 = 0x10325476;
  uStack_68 = 0;
  uStack_64 = 0;
  FUN_ram_4206d562(&uStack_68,param_1,param_2);
  FUN_ram_4206d622(&uStack_68,param_3);
  FUN_ram_4206d7da(&uStack_68,0x58);
  return 0;
}

