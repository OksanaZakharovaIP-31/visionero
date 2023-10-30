/* Generated code for Python module 'sqlalchemy.engine.interfaces'
 * created by Nuitka version 1.8.4
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_sqlalchemy$engine$interfaces" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$engine$interfaces;
PyDictObject *moduledict_sqlalchemy$engine$interfaces;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[322];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[322];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlalchemy.engine.interfaces"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 322; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_sqlalchemy$engine$interfaces(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 322; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e6a93aebff3e6588bbc71af05df38390;
static PyCodeObject *codeobj_d481466a7c8f3b629a3770b8706016a3;
static PyCodeObject *codeobj_6a6ef5e44a38e02d2c31eabf706152b5;
static PyCodeObject *codeobj_361ef0622530fddbe23d689efff5e9be;
static PyCodeObject *codeobj_fabf5bc52509ff28ce568eabd07d9b4d;
static PyCodeObject *codeobj_a887ee37c876b13270b147f21c84a03a;
static PyCodeObject *codeobj_e9d599bd9606c3291add3d76fcb8c29c;
static PyCodeObject *codeobj_fec96f2b7a73018927f2fd169e07b728;
static PyCodeObject *codeobj_4b0fd5d7b43c198e45f5dd338c7bcb08;
static PyCodeObject *codeobj_d1e9ee27fdb143cf0e6c86b8aeb1fee5;
static PyCodeObject *codeobj_9ab830e43cfb69b3ac8200abe9cd8b1c;
static PyCodeObject *codeobj_e93973ed29b84bbcc2e3d12f3d086de1;
static PyCodeObject *codeobj_d4494f9301a3087266b78a0b5d973cfa;
static PyCodeObject *codeobj_60383555ceb88e844f7b0ef08da2df96;
static PyCodeObject *codeobj_afd78a3119f53cf41b8345da1a7aa537;
static PyCodeObject *codeobj_474c03c83a1a020448e46a9a6c4b8928;
static PyCodeObject *codeobj_b642c3031fe8deaf95e5e2da21263fae;
static PyCodeObject *codeobj_f7492d48a1f0b019bb7ef3895c7f746c;
static PyCodeObject *codeobj_1ab3cd55d56c70090f637923d7a67808;
static PyCodeObject *codeobj_80473fc57a7d4a378e8aa083187e0c6e;
static PyCodeObject *codeobj_d34008cf9a17762c48d835a18e11f583;
static PyCodeObject *codeobj_284f0a540dc90f535a4d0314cd045499;
static PyCodeObject *codeobj_ae09f2574b7af74f5868a89212fd5279;
static PyCodeObject *codeobj_e61e88b4d18f7eadd6371203f798954b;
static PyCodeObject *codeobj_2e4f178f61b1ddcdbf8513762ff17109;
static PyCodeObject *codeobj_389302af75d847c462031ed53c14a853;
static PyCodeObject *codeobj_db5efa43feaa83e7c2fabd59c1e2f0df;
static PyCodeObject *codeobj_0af7543a7927b1c14046912fe8a1cb6b;
static PyCodeObject *codeobj_38fd12787c6477618e65682474efef1f;
static PyCodeObject *codeobj_dde0d6f0043982febb8030ad96d59943;
static PyCodeObject *codeobj_0b0f4064a77880c2b506363fc3546d00;
static PyCodeObject *codeobj_775edc32dd7227360ae72391dd44d412;
static PyCodeObject *codeobj_eb782cabb4fdf8b137233237c69e731d;
static PyCodeObject *codeobj_48abee30760cfc4dda96e3ec969d9444;
static PyCodeObject *codeobj_2cd16af480bb579cc1d09f05f5d04e3f;
static PyCodeObject *codeobj_9526f2870dd6530b108adf0a08aa8a08;
static PyCodeObject *codeobj_8b4367257e0f6ac40df30c81ee72c82c;
static PyCodeObject *codeobj_23d872c793e885e780924186d3fa2013;
static PyCodeObject *codeobj_a08125cef34f7dee67652455c47c892b;
static PyCodeObject *codeobj_533f01935f05cac21a12f9af35871bdc;
static PyCodeObject *codeobj_5e318938f36504f558c5d6e44101e9ce;
static PyCodeObject *codeobj_4d3b6164627f3155925f04e3b78384a8;
static PyCodeObject *codeobj_77ddba100b47a973ff98b6272e1b8096;
static PyCodeObject *codeobj_a983c79a189b887ac8c1680175e304a0;
static PyCodeObject *codeobj_00492ef224eb5971e77376cd8a1723c3;
static PyCodeObject *codeobj_9fdba8af52b97b9ad3cf11bc10708e52;
static PyCodeObject *codeobj_dcdbbc0eb7607c57d337b385df707b5f;
static PyCodeObject *codeobj_5225a6b8946df394aab3cd1af221eb97;
static PyCodeObject *codeobj_47926f78d7d9e584e7c3432164b5e742;
static PyCodeObject *codeobj_195ea1c03ffe88a417062320328b96b5;
static PyCodeObject *codeobj_d0ea16b32de419a9b2b51324ada376d2;
static PyCodeObject *codeobj_3630446a3f8ce7770ae9d3675a30cad3;
static PyCodeObject *codeobj_4959f50a2f33e5c97b2ccf9b2de9437d;
static PyCodeObject *codeobj_12a571fbcb12a2a8b9cba57197d7007d;
static PyCodeObject *codeobj_aa5a5e09934bee942ec03afa07e4acb1;
static PyCodeObject *codeobj_797641734884413f92b13eb2f3c268e4;
static PyCodeObject *codeobj_9f96b0c125df626e94b8f2fb8aeb2e49;
static PyCodeObject *codeobj_7ae036da39087620cdbf528a1a9934ac;
static PyCodeObject *codeobj_e6fe1ed3cc28b0597326ec1e79d815b7;
static PyCodeObject *codeobj_3f559392147b1aac376708058d8fa36a;
static PyCodeObject *codeobj_ec1148e5b6be3818641b433bda46ae0d;
static PyCodeObject *codeobj_26c8b2d6509fee34a1113f7d59114176;
static PyCodeObject *codeobj_c0e1bec1ac978d2ac3f4b25347fa9997;
static PyCodeObject *codeobj_5dea653d63f9f1c98c2a1a33c56d8f4c;
static PyCodeObject *codeobj_181ea63555b19de5ae44cd886887233e;
static PyCodeObject *codeobj_e7d8e81e7bd1d58f148a2ebe44e4b57c;
static PyCodeObject *codeobj_a3df05b143bf9792a0f72e5fa587d2de;
static PyCodeObject *codeobj_db774f0d1eed27255690397d0d29a13c;
static PyCodeObject *codeobj_3d4d44dc9d1a94f6b13fa68738b788b7;
static PyCodeObject *codeobj_be671536aca9dbf897a20ba782b5adb9;
static PyCodeObject *codeobj_a743c5a09953660c93df49542c753e28;
static PyCodeObject *codeobj_f06bc8a915c4c7df2c09a4acf7ee308d;
static PyCodeObject *codeobj_07e23d38b405aacaa966c07d26c4c189;
static PyCodeObject *codeobj_0f22b343563cbc1653267c94b111c05c;
static PyCodeObject *codeobj_286057e84fe06cf341ec8b0c66e9e9a3;
static PyCodeObject *codeobj_d9f5cb871f582c89ef1459a7b09f33bd;
static PyCodeObject *codeobj_cda0cbfb0f52f9c9a340024116ba60a8;
static PyCodeObject *codeobj_4d65c3a5ac03c76a14ab72331133bd45;
static PyCodeObject *codeobj_faecf29e0c8875c8a7e24e08b1651462;
static PyCodeObject *codeobj_772192b5c1fb8397abc5ecc2c9f34e3b;
static PyCodeObject *codeobj_1b1ae3647a451ad6cb4ecddc910763f6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[284]); CHECK_OBJECT(module_filename_obj);
    codeobj_e6a93aebff3e6588bbc71af05df38390 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[285], mod_consts[285], NULL, NULL, 0, 0, 0);
    codeobj_d481466a7c8f3b629a3770b8706016a3 = MAKE_CODE_OBJECT(module_filename_obj, 1689, CO_NOFREE, mod_consts[273], mod_consts[273], mod_consts[286], NULL, 0, 0, 0);
    codeobj_6a6ef5e44a38e02d2c31eabf706152b5 = MAKE_CODE_OBJECT(module_filename_obj, 1491, CO_NOFREE, mod_consts[245], mod_consts[245], mod_consts[286], NULL, 0, 0, 0);
    codeobj_361ef0622530fddbe23d689efff5e9be = MAKE_CODE_OBJECT(module_filename_obj, 1094, CO_NOFREE, mod_consts[212], mod_consts[212], mod_consts[286], NULL, 0, 0, 0);
    codeobj_fabf5bc52509ff28ce568eabd07d9b4d = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[286], NULL, 0, 0, 0);
    codeobj_a887ee37c876b13270b147f21c84a03a = MAKE_CODE_OBJECT(module_filename_obj, 1540, CO_NOFREE, mod_consts[262], mod_consts[262], mod_consts[286], NULL, 0, 0, 0);
    codeobj_e9d599bd9606c3291add3d76fcb8c29c = MAKE_CODE_OBJECT(module_filename_obj, 1328, CO_NOFREE, mod_consts[227], mod_consts[227], mod_consts[286], NULL, 0, 0, 0);
    codeobj_fec96f2b7a73018927f2fd169e07b728 = MAKE_CODE_OBJECT(module_filename_obj, 1269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[214], mod_consts[214], mod_consts[287], NULL, 3, 0, 0);
    codeobj_4b0fd5d7b43c198e45f5dd338c7bcb08 = MAKE_CODE_OBJECT(module_filename_obj, 1735, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[282], mod_consts[282], mod_consts[288], NULL, 1, 0, 0);
    codeobj_d1e9ee27fdb143cf0e6c86b8aeb1fee5 = MAKE_CODE_OBJECT(module_filename_obj, 1536, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[260], mod_consts[260], mod_consts[289], NULL, 4, 0, 0);
    codeobj_9ab830e43cfb69b3ac8200abe9cd8b1c = MAKE_CODE_OBJECT(module_filename_obj, 528, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[290], NULL, 2, 0, 0);
    codeobj_e93973ed29b84bbcc2e3d12f3d086de1 = MAKE_CODE_OBJECT(module_filename_obj, 517, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[290], NULL, 2, 0, 0);
    codeobj_d4494f9301a3087266b78a0b5d973cfa = MAKE_CODE_OBJECT(module_filename_obj, 1533, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[257], mod_consts[257], mod_consts[291], NULL, 3, 0, 0);
    codeobj_60383555ceb88e844f7b0ef08da2df96 = MAKE_CODE_OBJECT(module_filename_obj, 760, CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[292], NULL, 1, 0, 0);
    codeobj_afd78a3119f53cf41b8345da1a7aa537 = MAKE_CODE_OBJECT(module_filename_obj, 1502, CO_VARKEYWORDS | CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[293], NULL, 1, 0, 0);
    codeobj_474c03c83a1a020448e46a9a6c4b8928 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[294], NULL, 2, 0, 0);
    codeobj_b642c3031fe8deaf95e5e2da21263fae = MAKE_CODE_OBJECT(module_filename_obj, 1386, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[229], mod_consts[229], mod_consts[288], NULL, 1, 0, 0);
    codeobj_f7492d48a1f0b019bb7ef3895c7f746c = MAKE_CODE_OBJECT(module_filename_obj, 631, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[288], NULL, 1, 0, 0);
    codeobj_1ab3cd55d56c70090f637923d7a67808 = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[295], NULL, 2, 0, 0);
    codeobj_80473fc57a7d4a378e8aa083187e0c6e = MAKE_CODE_OBJECT(module_filename_obj, 540, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[296], NULL, 2, 0, 0);
    codeobj_d34008cf9a17762c48d835a18e11f583 = MAKE_CODE_OBJECT(module_filename_obj, 670, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[297], NULL, 3, 0, 0);
    codeobj_284f0a540dc90f535a4d0314cd045499 = MAKE_CODE_OBJECT(module_filename_obj, 603, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[296], NULL, 2, 0, 0);
    codeobj_ae09f2574b7af74f5868a89212fd5279 = MAKE_CODE_OBJECT(module_filename_obj, 575, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[296], NULL, 2, 0, 0);
    codeobj_e61e88b4d18f7eadd6371203f798954b = MAKE_CODE_OBJECT(module_filename_obj, 705, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[298], NULL, 5, 0, 0);
    codeobj_2e4f178f61b1ddcdbf8513762ff17109 = MAKE_CODE_OBJECT(module_filename_obj, 737, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[299], NULL, 5, 0, 0);
    codeobj_389302af75d847c462031ed53c14a853 = MAKE_CODE_OBJECT(module_filename_obj, 743, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[182], mod_consts[182], mod_consts[299], NULL, 5, 0, 0);
    codeobj_db5efa43feaa83e7c2fabd59c1e2f0df = MAKE_CODE_OBJECT(module_filename_obj, 731, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[299], NULL, 5, 0, 0);
    codeobj_0af7543a7927b1c14046912fe8a1cb6b = MAKE_CODE_OBJECT(module_filename_obj, 680, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[297], NULL, 3, 0, 0);
    codeobj_38fd12787c6477618e65682474efef1f = MAKE_CODE_OBJECT(module_filename_obj, 721, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[290], NULL, 2, 0, 0);
    codeobj_dde0d6f0043982febb8030ad96d59943 = MAKE_CODE_OBJECT(module_filename_obj, 661, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[300], NULL, 3, 0, 0);
    codeobj_0b0f4064a77880c2b506363fc3546d00 = MAKE_CODE_OBJECT(module_filename_obj, 564, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[296], NULL, 2, 0, 0);
    codeobj_775edc32dd7227360ae72391dd44d412 = MAKE_CODE_OBJECT(module_filename_obj, 651, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[300], NULL, 3, 0, 0);
    codeobj_eb782cabb4fdf8b137233237c69e731d = MAKE_CODE_OBJECT(module_filename_obj, 690, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[298], NULL, 5, 0, 0);
    codeobj_48abee30760cfc4dda96e3ec969d9444 = MAKE_CODE_OBJECT(module_filename_obj, 641, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[300], NULL, 3, 0, 0);
    codeobj_2cd16af480bb579cc1d09f05f5d04e3f = MAKE_CODE_OBJECT(module_filename_obj, 616, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[301], NULL, 4, 0, 0);
    codeobj_9526f2870dd6530b108adf0a08aa8a08 = MAKE_CODE_OBJECT(module_filename_obj, 586, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[296], NULL, 2, 0, 0);
    codeobj_8b4367257e0f6ac40df30c81ee72c82c = MAKE_CODE_OBJECT(module_filename_obj, 1702, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[278], mod_consts[278], mod_consts[288], NULL, 1, 0, 0);
    codeobj_23d872c793e885e780924186d3fa2013 = MAKE_CODE_OBJECT(module_filename_obj, 1060, CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[302], NULL, 2, 0, 0);
    codeobj_a08125cef34f7dee67652455c47c892b = MAKE_CODE_OBJECT(module_filename_obj, 1318, CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[303], NULL, 2, 0, 0);
    codeobj_533f01935f05cac21a12f9af35871bdc = MAKE_CODE_OBJECT(module_filename_obj, 1520, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[253], mod_consts[253], mod_consts[304], NULL, 2, 0, 0);
    codeobj_5e318938f36504f558c5d6e44101e9ce = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[305], NULL, 4, 0, 0);
    codeobj_4d3b6164627f3155925f04e3b78384a8 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[305], NULL, 4, 0, 0);
    codeobj_77ddba100b47a973ff98b6272e1b8096 = MAKE_CODE_OBJECT(module_filename_obj, 994, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[306], NULL, 2, 0, 0);
    codeobj_a983c79a189b887ac8c1680175e304a0 = MAKE_CODE_OBJECT(module_filename_obj, 1015, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[201], mod_consts[201], mod_consts[307], NULL, 2, 0, 0);
    codeobj_00492ef224eb5971e77376cd8a1723c3 = MAKE_CODE_OBJECT(module_filename_obj, 1078, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[290], NULL, 2, 0, 0);
    codeobj_9fdba8af52b97b9ad3cf11bc10708e52 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[305], NULL, 4, 0, 0);
    codeobj_dcdbbc0eb7607c57d337b385df707b5f = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[305], NULL, 4, 0, 0);
    codeobj_5225a6b8946df394aab3cd1af221eb97 = MAKE_CODE_OBJECT(module_filename_obj, 961, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[306], NULL, 2, 0, 0);
    codeobj_47926f78d7d9e584e7c3432164b5e742 = MAKE_CODE_OBJECT(module_filename_obj, 1407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[233], mod_consts[233], mod_consts[308], NULL, 2, 0, 0);
    codeobj_195ea1c03ffe88a417062320328b96b5 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[305], NULL, 4, 0, 0);
    codeobj_d0ea16b32de419a9b2b51324ada376d2 = MAKE_CODE_OBJECT(module_filename_obj, 1470, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[243], mod_consts[243], mod_consts[288], NULL, 1, 0, 0);
    codeobj_3630446a3f8ce7770ae9d3675a30cad3 = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[309], NULL, 3, 0, 0);
    codeobj_4959f50a2f33e5c97b2ccf9b2de9437d = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[305], NULL, 4, 0, 0);
    codeobj_12a571fbcb12a2a8b9cba57197d7007d = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[309], NULL, 3, 0, 0);
    codeobj_aa5a5e09934bee942ec03afa07e4acb1 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[309], NULL, 3, 0, 0);
    codeobj_797641734884413f92b13eb2f3c268e4 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[309], NULL, 3, 0, 0);
    codeobj_9f96b0c125df626e94b8f2fb8aeb2e49 = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[305], NULL, 4, 0, 0);
    codeobj_7ae036da39087620cdbf528a1a9934ac = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[310], NULL, 4, 0, 0);
    codeobj_e6fe1ed3cc28b0597326ec1e79d815b7 = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[309], NULL, 3, 0, 0);
    codeobj_3f559392147b1aac376708058d8fa36a = MAKE_CODE_OBJECT(module_filename_obj, 1451, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[237], mod_consts[237], mod_consts[311], NULL, 2, 0, 0);
    codeobj_ec1148e5b6be3818641b433bda46ae0d = MAKE_CODE_OBJECT(module_filename_obj, 1312, CO_NOFREE, mod_consts[220], mod_consts[220], mod_consts[312], NULL, 3, 0, 0);
    codeobj_26c8b2d6509fee34a1113f7d59114176 = MAKE_CODE_OBJECT(module_filename_obj, 1315, CO_NOFREE, mod_consts[223], mod_consts[223], mod_consts[313], NULL, 3, 0, 0);
    codeobj_c0e1bec1ac978d2ac3f4b25347fa9997 = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[314], NULL, 5, 0, 0);
    codeobj_5dea653d63f9f1c98c2a1a33c56d8f4c = MAKE_CODE_OBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[315], NULL, 4, 0, 0);
    codeobj_181ea63555b19de5ae44cd886887233e = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[305], NULL, 4, 0, 0);
    codeobj_e7d8e81e7bd1d58f148a2ebe44e4b57c = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[290], NULL, 2, 0, 0);
    codeobj_a3df05b143bf9792a0f72e5fa587d2de = MAKE_CODE_OBJECT(module_filename_obj, 754, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[184], mod_consts[184], mod_consts[316], NULL, 4, 0, 0);
    codeobj_db774f0d1eed27255690397d0d29a13c = MAKE_CODE_OBJECT(module_filename_obj, 1463, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[241], mod_consts[241], mod_consts[288], NULL, 1, 0, 0);
    codeobj_3d4d44dc9d1a94f6b13fa68738b788b7 = MAKE_CODE_OBJECT(module_filename_obj, 1031, CO_NOFREE, mod_consts[204], mod_consts[204], mod_consts[317], NULL, 1, 0, 0);
    codeobj_be671536aca9dbf897a20ba782b5adb9 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[295], NULL, 2, 0, 0);
    codeobj_a743c5a09953660c93df49542c753e28 = MAKE_CODE_OBJECT(module_filename_obj, 854, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[288], NULL, 1, 0, 0);
    codeobj_f06bc8a915c4c7df2c09a4acf7ee308d = MAKE_CODE_OBJECT(module_filename_obj, 793, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[189], mod_consts[189], mod_consts[294], NULL, 2, 0, 0);
    codeobj_07e23d38b405aacaa966c07d26c4c189 = MAKE_CODE_OBJECT(module_filename_obj, 1441, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[235], mod_consts[288], NULL, 1, 0, 0);
    codeobj_0f22b343563cbc1653267c94b111c05c = MAKE_CODE_OBJECT(module_filename_obj, 1397, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[231], mod_consts[231], mod_consts[288], NULL, 1, 0, 0);
    codeobj_286057e84fe06cf341ec8b0c66e9e9a3 = MAKE_CODE_OBJECT(module_filename_obj, 907, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[306], NULL, 2, 0, 0);
    codeobj_d9f5cb871f582c89ef1459a7b09f33bd = MAKE_CODE_OBJECT(module_filename_obj, 1706, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[280], mod_consts[280], mod_consts[318], NULL, 2, 0, 0);
    codeobj_cda0cbfb0f52f9c9a340024116ba60a8 = MAKE_CODE_OBJECT(module_filename_obj, 1526, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[255], mod_consts[255], mod_consts[304], NULL, 2, 0, 0);
    codeobj_4d65c3a5ac03c76a14ab72331133bd45 = MAKE_CODE_OBJECT(module_filename_obj, 934, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[319], NULL, 3, 0, 0);
    codeobj_faecf29e0c8875c8a7e24e08b1651462 = MAKE_CODE_OBJECT(module_filename_obj, 1457, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[239], mod_consts[320], NULL, 2, 0, 0);
    codeobj_772192b5c1fb8397abc5ecc2c9f34e3b = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[321], NULL, 2, 0, 0);
    codeobj_1b1ae3647a451ad6cb4ecddc910763f6 = MAKE_CODE_OBJECT(module_filename_obj, 1296, CO_NOFREE, mod_consts[217], mod_consts[217], mod_consts[294], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__10_get_sequence_names(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__11_get_temp_view_names(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__12_get_view_definition(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__13_get_indexes(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__14_get_unique_constraints(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__15_get_check_constraints(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__16_get_table_comment(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__17_normalize_name();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__18_denormalize_name();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__19_has_table(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__1_create_connect_args();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__20_has_index(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__21_has_sequence(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__24_do_begin();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__25_do_rollback();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__26_do_commit();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__27_do_terminate();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__28_do_close();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__29_do_set_input_sizes();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__2_type_descriptor();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__30_create_xid();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__31_do_savepoint();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__32_do_rollback_to_savepoint();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__33_do_release_savepoint();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__34_do_begin_twophase();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__35_do_prepare_twophase();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__36_do_rollback_twophase(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__37_do_commit_twophase(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__38_do_recover_twophase();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__39_do_executemany(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__3_initialize();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__40_do_execute(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__41_do_execute_no_params(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__42_is_disconnect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__43_connect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__44_on_connect_url();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__45_on_connect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__46_reset_isolation_level();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__47_set_isolation_level();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__48_get_isolation_level();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__49_get_default_isolation_level();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__4_get_columns(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__50_get_dialect_cls();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__51_load_provisioning();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__52_engine_created();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__53_get_driver_connection();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__54___init__();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__55_update_url();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__56_handle_dialect_kwargs();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__57_handle_pool_kwargs();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__58_engine_created();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__59_create_cursor();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__5_get_pk_constraint(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__60_pre_exec();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__61_get_out_parameter_values();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__62_post_exec();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__63_handle_dbapi_exception();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__64_should_autocommit_text();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__65_lastrow_has_defaults();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__66_get_rowcount();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__67_connect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__68_execute();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__69_scalar();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__6_get_foreign_keys(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__70__run_visitor();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__71__execute_clauseelement(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__72_driver_connection();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__73_run_async();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__74___repr__();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__7_get_table_names(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__8_get_temp_table_names(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__9_get_view_names(PyObject *defaults);


// The module function definitions.
static PyObject *impl_sqlalchemy$engine$interfaces$$$function__1_create_connect_args(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    struct Nuitka_FrameObject *frame_474c03c83a1a020448e46a9a6c4b8928;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_474c03c83a1a020448e46a9a6c4b8928 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_474c03c83a1a020448e46a9a6c4b8928)) {
        Py_XDECREF(cache_frame_474c03c83a1a020448e46a9a6c4b8928);

#if _DEBUG_REFCOUNTS
        if (cache_frame_474c03c83a1a020448e46a9a6c4b8928 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_474c03c83a1a020448e46a9a6c4b8928 = MAKE_FUNCTION_FRAME(tstate, codeobj_474c03c83a1a020448e46a9a6c4b8928, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_474c03c83a1a020448e46a9a6c4b8928->m_type_description == NULL);
    frame_474c03c83a1a020448e46a9a6c4b8928 = cache_frame_474c03c83a1a020448e46a9a6c4b8928;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_474c03c83a1a020448e46a9a6c4b8928);
    assert(Py_REFCNT(frame_474c03c83a1a020448e46a9a6c4b8928) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_474c03c83a1a020448e46a9a6c4b8928->m_frame.f_lineno = 200;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 200;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_474c03c83a1a020448e46a9a6c4b8928, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_474c03c83a1a020448e46a9a6c4b8928->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_474c03c83a1a020448e46a9a6c4b8928, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_474c03c83a1a020448e46a9a6c4b8928,
        type_description_1,
        par_self,
        par_url
    );


    // Release cached frame if used for exception.
    if (frame_474c03c83a1a020448e46a9a6c4b8928 == cache_frame_474c03c83a1a020448e46a9a6c4b8928) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_474c03c83a1a020448e46a9a6c4b8928);
        cache_frame_474c03c83a1a020448e46a9a6c4b8928 = NULL;
    }

    assertFrameObject(frame_474c03c83a1a020448e46a9a6c4b8928);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__2_type_descriptor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_typeobj = python_pars[1];
    struct Nuitka_FrameObject *frame_772192b5c1fb8397abc5ecc2c9f34e3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b)) {
        Py_XDECREF(cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b = MAKE_FUNCTION_FRAME(tstate, codeobj_772192b5c1fb8397abc5ecc2c9f34e3b, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b->m_type_description == NULL);
    frame_772192b5c1fb8397abc5ecc2c9f34e3b = cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_772192b5c1fb8397abc5ecc2c9f34e3b);
    assert(Py_REFCNT(frame_772192b5c1fb8397abc5ecc2c9f34e3b) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_772192b5c1fb8397abc5ecc2c9f34e3b->m_frame.f_lineno = 215;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 215;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_772192b5c1fb8397abc5ecc2c9f34e3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_772192b5c1fb8397abc5ecc2c9f34e3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_772192b5c1fb8397abc5ecc2c9f34e3b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_772192b5c1fb8397abc5ecc2c9f34e3b,
        type_description_1,
        par_cls,
        par_typeobj
    );


    // Release cached frame if used for exception.
    if (frame_772192b5c1fb8397abc5ecc2c9f34e3b == cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b);
        cache_frame_772192b5c1fb8397abc5ecc2c9f34e3b = NULL;
    }

    assertFrameObject(frame_772192b5c1fb8397abc5ecc2c9f34e3b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_typeobj);
    Py_DECREF(par_typeobj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__4_get_columns(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_4d3b6164627f3155925f04e3b78384a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d3b6164627f3155925f04e3b78384a8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d3b6164627f3155925f04e3b78384a8)) {
        Py_XDECREF(cache_frame_4d3b6164627f3155925f04e3b78384a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d3b6164627f3155925f04e3b78384a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d3b6164627f3155925f04e3b78384a8 = MAKE_FUNCTION_FRAME(tstate, codeobj_4d3b6164627f3155925f04e3b78384a8, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d3b6164627f3155925f04e3b78384a8->m_type_description == NULL);
    frame_4d3b6164627f3155925f04e3b78384a8 = cache_frame_4d3b6164627f3155925f04e3b78384a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4d3b6164627f3155925f04e3b78384a8);
    assert(Py_REFCNT(frame_4d3b6164627f3155925f04e3b78384a8) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_4d3b6164627f3155925f04e3b78384a8->m_frame.f_lineno = 268;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 268;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d3b6164627f3155925f04e3b78384a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d3b6164627f3155925f04e3b78384a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d3b6164627f3155925f04e3b78384a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d3b6164627f3155925f04e3b78384a8,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_4d3b6164627f3155925f04e3b78384a8 == cache_frame_4d3b6164627f3155925f04e3b78384a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d3b6164627f3155925f04e3b78384a8);
        cache_frame_4d3b6164627f3155925f04e3b78384a8 = NULL;
    }

    assertFrameObject(frame_4d3b6164627f3155925f04e3b78384a8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__5_get_pk_constraint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_195ea1c03ffe88a417062320328b96b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_195ea1c03ffe88a417062320328b96b5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_195ea1c03ffe88a417062320328b96b5)) {
        Py_XDECREF(cache_frame_195ea1c03ffe88a417062320328b96b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_195ea1c03ffe88a417062320328b96b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_195ea1c03ffe88a417062320328b96b5 = MAKE_FUNCTION_FRAME(tstate, codeobj_195ea1c03ffe88a417062320328b96b5, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_195ea1c03ffe88a417062320328b96b5->m_type_description == NULL);
    frame_195ea1c03ffe88a417062320328b96b5 = cache_frame_195ea1c03ffe88a417062320328b96b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_195ea1c03ffe88a417062320328b96b5);
    assert(Py_REFCNT(frame_195ea1c03ffe88a417062320328b96b5) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_195ea1c03ffe88a417062320328b96b5->m_frame.f_lineno = 285;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 285;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_195ea1c03ffe88a417062320328b96b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_195ea1c03ffe88a417062320328b96b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_195ea1c03ffe88a417062320328b96b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_195ea1c03ffe88a417062320328b96b5,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_195ea1c03ffe88a417062320328b96b5 == cache_frame_195ea1c03ffe88a417062320328b96b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_195ea1c03ffe88a417062320328b96b5);
        cache_frame_195ea1c03ffe88a417062320328b96b5 = NULL;
    }

    assertFrameObject(frame_195ea1c03ffe88a417062320328b96b5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__6_get_foreign_keys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_9fdba8af52b97b9ad3cf11bc10708e52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fdba8af52b97b9ad3cf11bc10708e52 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fdba8af52b97b9ad3cf11bc10708e52)) {
        Py_XDECREF(cache_frame_9fdba8af52b97b9ad3cf11bc10708e52);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fdba8af52b97b9ad3cf11bc10708e52 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fdba8af52b97b9ad3cf11bc10708e52 = MAKE_FUNCTION_FRAME(tstate, codeobj_9fdba8af52b97b9ad3cf11bc10708e52, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9fdba8af52b97b9ad3cf11bc10708e52->m_type_description == NULL);
    frame_9fdba8af52b97b9ad3cf11bc10708e52 = cache_frame_9fdba8af52b97b9ad3cf11bc10708e52;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9fdba8af52b97b9ad3cf11bc10708e52);
    assert(Py_REFCNT(frame_9fdba8af52b97b9ad3cf11bc10708e52) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_9fdba8af52b97b9ad3cf11bc10708e52->m_frame.f_lineno = 311;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 311;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fdba8af52b97b9ad3cf11bc10708e52, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fdba8af52b97b9ad3cf11bc10708e52->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fdba8af52b97b9ad3cf11bc10708e52, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fdba8af52b97b9ad3cf11bc10708e52,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_9fdba8af52b97b9ad3cf11bc10708e52 == cache_frame_9fdba8af52b97b9ad3cf11bc10708e52) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9fdba8af52b97b9ad3cf11bc10708e52);
        cache_frame_9fdba8af52b97b9ad3cf11bc10708e52 = NULL;
    }

    assertFrameObject(frame_9fdba8af52b97b9ad3cf11bc10708e52);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__7_get_table_names(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_12a571fbcb12a2a8b9cba57197d7007d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12a571fbcb12a2a8b9cba57197d7007d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12a571fbcb12a2a8b9cba57197d7007d)) {
        Py_XDECREF(cache_frame_12a571fbcb12a2a8b9cba57197d7007d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12a571fbcb12a2a8b9cba57197d7007d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12a571fbcb12a2a8b9cba57197d7007d = MAKE_FUNCTION_FRAME(tstate, codeobj_12a571fbcb12a2a8b9cba57197d7007d, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12a571fbcb12a2a8b9cba57197d7007d->m_type_description == NULL);
    frame_12a571fbcb12a2a8b9cba57197d7007d = cache_frame_12a571fbcb12a2a8b9cba57197d7007d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_12a571fbcb12a2a8b9cba57197d7007d);
    assert(Py_REFCNT(frame_12a571fbcb12a2a8b9cba57197d7007d) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_12a571fbcb12a2a8b9cba57197d7007d->m_frame.f_lineno = 316;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 316;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12a571fbcb12a2a8b9cba57197d7007d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12a571fbcb12a2a8b9cba57197d7007d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12a571fbcb12a2a8b9cba57197d7007d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12a571fbcb12a2a8b9cba57197d7007d,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_12a571fbcb12a2a8b9cba57197d7007d == cache_frame_12a571fbcb12a2a8b9cba57197d7007d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12a571fbcb12a2a8b9cba57197d7007d);
        cache_frame_12a571fbcb12a2a8b9cba57197d7007d = NULL;
    }

    assertFrameObject(frame_12a571fbcb12a2a8b9cba57197d7007d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__8_get_temp_table_names(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_aa5a5e09934bee942ec03afa07e4acb1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa5a5e09934bee942ec03afa07e4acb1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa5a5e09934bee942ec03afa07e4acb1)) {
        Py_XDECREF(cache_frame_aa5a5e09934bee942ec03afa07e4acb1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa5a5e09934bee942ec03afa07e4acb1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa5a5e09934bee942ec03afa07e4acb1 = MAKE_FUNCTION_FRAME(tstate, codeobj_aa5a5e09934bee942ec03afa07e4acb1, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa5a5e09934bee942ec03afa07e4acb1->m_type_description == NULL);
    frame_aa5a5e09934bee942ec03afa07e4acb1 = cache_frame_aa5a5e09934bee942ec03afa07e4acb1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aa5a5e09934bee942ec03afa07e4acb1);
    assert(Py_REFCNT(frame_aa5a5e09934bee942ec03afa07e4acb1) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_aa5a5e09934bee942ec03afa07e4acb1->m_frame.f_lineno = 324;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 324;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa5a5e09934bee942ec03afa07e4acb1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa5a5e09934bee942ec03afa07e4acb1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa5a5e09934bee942ec03afa07e4acb1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa5a5e09934bee942ec03afa07e4acb1,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_aa5a5e09934bee942ec03afa07e4acb1 == cache_frame_aa5a5e09934bee942ec03afa07e4acb1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa5a5e09934bee942ec03afa07e4acb1);
        cache_frame_aa5a5e09934bee942ec03afa07e4acb1 = NULL;
    }

    assertFrameObject(frame_aa5a5e09934bee942ec03afa07e4acb1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__9_get_view_names(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_e6fe1ed3cc28b0597326ec1e79d815b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7)) {
        Py_XDECREF(cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7 = MAKE_FUNCTION_FRAME(tstate, codeobj_e6fe1ed3cc28b0597326ec1e79d815b7, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7->m_type_description == NULL);
    frame_e6fe1ed3cc28b0597326ec1e79d815b7 = cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e6fe1ed3cc28b0597326ec1e79d815b7);
    assert(Py_REFCNT(frame_e6fe1ed3cc28b0597326ec1e79d815b7) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_e6fe1ed3cc28b0597326ec1e79d815b7->m_frame.f_lineno = 332;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 332;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6fe1ed3cc28b0597326ec1e79d815b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6fe1ed3cc28b0597326ec1e79d815b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6fe1ed3cc28b0597326ec1e79d815b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6fe1ed3cc28b0597326ec1e79d815b7,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_e6fe1ed3cc28b0597326ec1e79d815b7 == cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7);
        cache_frame_e6fe1ed3cc28b0597326ec1e79d815b7 = NULL;
    }

    assertFrameObject(frame_e6fe1ed3cc28b0597326ec1e79d815b7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__10_get_sequence_names(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_3630446a3f8ce7770ae9d3675a30cad3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3630446a3f8ce7770ae9d3675a30cad3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3630446a3f8ce7770ae9d3675a30cad3)) {
        Py_XDECREF(cache_frame_3630446a3f8ce7770ae9d3675a30cad3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3630446a3f8ce7770ae9d3675a30cad3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3630446a3f8ce7770ae9d3675a30cad3 = MAKE_FUNCTION_FRAME(tstate, codeobj_3630446a3f8ce7770ae9d3675a30cad3, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3630446a3f8ce7770ae9d3675a30cad3->m_type_description == NULL);
    frame_3630446a3f8ce7770ae9d3675a30cad3 = cache_frame_3630446a3f8ce7770ae9d3675a30cad3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3630446a3f8ce7770ae9d3675a30cad3);
    assert(Py_REFCNT(frame_3630446a3f8ce7770ae9d3675a30cad3) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_3630446a3f8ce7770ae9d3675a30cad3->m_frame.f_lineno = 342;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 342;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3630446a3f8ce7770ae9d3675a30cad3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3630446a3f8ce7770ae9d3675a30cad3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3630446a3f8ce7770ae9d3675a30cad3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3630446a3f8ce7770ae9d3675a30cad3,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_3630446a3f8ce7770ae9d3675a30cad3 == cache_frame_3630446a3f8ce7770ae9d3675a30cad3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3630446a3f8ce7770ae9d3675a30cad3);
        cache_frame_3630446a3f8ce7770ae9d3675a30cad3 = NULL;
    }

    assertFrameObject(frame_3630446a3f8ce7770ae9d3675a30cad3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__11_get_temp_view_names(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_797641734884413f92b13eb2f3c268e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_797641734884413f92b13eb2f3c268e4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_797641734884413f92b13eb2f3c268e4)) {
        Py_XDECREF(cache_frame_797641734884413f92b13eb2f3c268e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_797641734884413f92b13eb2f3c268e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_797641734884413f92b13eb2f3c268e4 = MAKE_FUNCTION_FRAME(tstate, codeobj_797641734884413f92b13eb2f3c268e4, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_797641734884413f92b13eb2f3c268e4->m_type_description == NULL);
    frame_797641734884413f92b13eb2f3c268e4 = cache_frame_797641734884413f92b13eb2f3c268e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_797641734884413f92b13eb2f3c268e4);
    assert(Py_REFCNT(frame_797641734884413f92b13eb2f3c268e4) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_797641734884413f92b13eb2f3c268e4->m_frame.f_lineno = 350;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 350;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_797641734884413f92b13eb2f3c268e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_797641734884413f92b13eb2f3c268e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_797641734884413f92b13eb2f3c268e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_797641734884413f92b13eb2f3c268e4,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_797641734884413f92b13eb2f3c268e4 == cache_frame_797641734884413f92b13eb2f3c268e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_797641734884413f92b13eb2f3c268e4);
        cache_frame_797641734884413f92b13eb2f3c268e4 = NULL;
    }

    assertFrameObject(frame_797641734884413f92b13eb2f3c268e4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__12_get_view_definition(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_view_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_7ae036da39087620cdbf528a1a9934ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ae036da39087620cdbf528a1a9934ac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ae036da39087620cdbf528a1a9934ac)) {
        Py_XDECREF(cache_frame_7ae036da39087620cdbf528a1a9934ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ae036da39087620cdbf528a1a9934ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ae036da39087620cdbf528a1a9934ac = MAKE_FUNCTION_FRAME(tstate, codeobj_7ae036da39087620cdbf528a1a9934ac, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ae036da39087620cdbf528a1a9934ac->m_type_description == NULL);
    frame_7ae036da39087620cdbf528a1a9934ac = cache_frame_7ae036da39087620cdbf528a1a9934ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7ae036da39087620cdbf528a1a9934ac);
    assert(Py_REFCNT(frame_7ae036da39087620cdbf528a1a9934ac) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_7ae036da39087620cdbf528a1a9934ac->m_frame.f_lineno = 360;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 360;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ae036da39087620cdbf528a1a9934ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ae036da39087620cdbf528a1a9934ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ae036da39087620cdbf528a1a9934ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ae036da39087620cdbf528a1a9934ac,
        type_description_1,
        par_self,
        par_connection,
        par_view_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_7ae036da39087620cdbf528a1a9934ac == cache_frame_7ae036da39087620cdbf528a1a9934ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ae036da39087620cdbf528a1a9934ac);
        cache_frame_7ae036da39087620cdbf528a1a9934ac = NULL;
    }

    assertFrameObject(frame_7ae036da39087620cdbf528a1a9934ac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_view_name);
    Py_DECREF(par_view_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__13_get_indexes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_dcdbbc0eb7607c57d337b385df707b5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dcdbbc0eb7607c57d337b385df707b5f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dcdbbc0eb7607c57d337b385df707b5f)) {
        Py_XDECREF(cache_frame_dcdbbc0eb7607c57d337b385df707b5f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dcdbbc0eb7607c57d337b385df707b5f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dcdbbc0eb7607c57d337b385df707b5f = MAKE_FUNCTION_FRAME(tstate, codeobj_dcdbbc0eb7607c57d337b385df707b5f, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dcdbbc0eb7607c57d337b385df707b5f->m_type_description == NULL);
    frame_dcdbbc0eb7607c57d337b385df707b5f = cache_frame_dcdbbc0eb7607c57d337b385df707b5f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dcdbbc0eb7607c57d337b385df707b5f);
    assert(Py_REFCNT(frame_dcdbbc0eb7607c57d337b385df707b5f) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_dcdbbc0eb7607c57d337b385df707b5f->m_frame.f_lineno = 379;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 379;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dcdbbc0eb7607c57d337b385df707b5f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcdbbc0eb7607c57d337b385df707b5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcdbbc0eb7607c57d337b385df707b5f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dcdbbc0eb7607c57d337b385df707b5f,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_dcdbbc0eb7607c57d337b385df707b5f == cache_frame_dcdbbc0eb7607c57d337b385df707b5f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dcdbbc0eb7607c57d337b385df707b5f);
        cache_frame_dcdbbc0eb7607c57d337b385df707b5f = NULL;
    }

    assertFrameObject(frame_dcdbbc0eb7607c57d337b385df707b5f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__14_get_unique_constraints(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_9f96b0c125df626e94b8f2fb8aeb2e49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49)) {
        Py_XDECREF(cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49 = MAKE_FUNCTION_FRAME(tstate, codeobj_9f96b0c125df626e94b8f2fb8aeb2e49, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49->m_type_description == NULL);
    frame_9f96b0c125df626e94b8f2fb8aeb2e49 = cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9f96b0c125df626e94b8f2fb8aeb2e49);
    assert(Py_REFCNT(frame_9f96b0c125df626e94b8f2fb8aeb2e49) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_9f96b0c125df626e94b8f2fb8aeb2e49->m_frame.f_lineno = 403;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 403;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f96b0c125df626e94b8f2fb8aeb2e49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f96b0c125df626e94b8f2fb8aeb2e49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f96b0c125df626e94b8f2fb8aeb2e49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f96b0c125df626e94b8f2fb8aeb2e49,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_9f96b0c125df626e94b8f2fb8aeb2e49 == cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49);
        cache_frame_9f96b0c125df626e94b8f2fb8aeb2e49 = NULL;
    }

    assertFrameObject(frame_9f96b0c125df626e94b8f2fb8aeb2e49);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__15_get_check_constraints(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_5e318938f36504f558c5d6e44101e9ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5e318938f36504f558c5d6e44101e9ce = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e318938f36504f558c5d6e44101e9ce)) {
        Py_XDECREF(cache_frame_5e318938f36504f558c5d6e44101e9ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e318938f36504f558c5d6e44101e9ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e318938f36504f558c5d6e44101e9ce = MAKE_FUNCTION_FRAME(tstate, codeobj_5e318938f36504f558c5d6e44101e9ce, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e318938f36504f558c5d6e44101e9ce->m_type_description == NULL);
    frame_5e318938f36504f558c5d6e44101e9ce = cache_frame_5e318938f36504f558c5d6e44101e9ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5e318938f36504f558c5d6e44101e9ce);
    assert(Py_REFCNT(frame_5e318938f36504f558c5d6e44101e9ce) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_5e318938f36504f558c5d6e44101e9ce->m_frame.f_lineno = 425;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 425;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e318938f36504f558c5d6e44101e9ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e318938f36504f558c5d6e44101e9ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e318938f36504f558c5d6e44101e9ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e318938f36504f558c5d6e44101e9ce,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_5e318938f36504f558c5d6e44101e9ce == cache_frame_5e318938f36504f558c5d6e44101e9ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e318938f36504f558c5d6e44101e9ce);
        cache_frame_5e318938f36504f558c5d6e44101e9ce = NULL;
    }

    assertFrameObject(frame_5e318938f36504f558c5d6e44101e9ce);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__16_get_table_comment(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_4959f50a2f33e5c97b2ccf9b2de9437d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d)) {
        Py_XDECREF(cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d = MAKE_FUNCTION_FRAME(tstate, codeobj_4959f50a2f33e5c97b2ccf9b2de9437d, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d->m_type_description == NULL);
    frame_4959f50a2f33e5c97b2ccf9b2de9437d = cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4959f50a2f33e5c97b2ccf9b2de9437d);
    assert(Py_REFCNT(frame_4959f50a2f33e5c97b2ccf9b2de9437d) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_4959f50a2f33e5c97b2ccf9b2de9437d->m_frame.f_lineno = 443;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 443;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4959f50a2f33e5c97b2ccf9b2de9437d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4959f50a2f33e5c97b2ccf9b2de9437d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4959f50a2f33e5c97b2ccf9b2de9437d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4959f50a2f33e5c97b2ccf9b2de9437d,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_4959f50a2f33e5c97b2ccf9b2de9437d == cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d);
        cache_frame_4959f50a2f33e5c97b2ccf9b2de9437d = NULL;
    }

    assertFrameObject(frame_4959f50a2f33e5c97b2ccf9b2de9437d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__17_normalize_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_be671536aca9dbf897a20ba782b5adb9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be671536aca9dbf897a20ba782b5adb9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be671536aca9dbf897a20ba782b5adb9)) {
        Py_XDECREF(cache_frame_be671536aca9dbf897a20ba782b5adb9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be671536aca9dbf897a20ba782b5adb9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be671536aca9dbf897a20ba782b5adb9 = MAKE_FUNCTION_FRAME(tstate, codeobj_be671536aca9dbf897a20ba782b5adb9, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be671536aca9dbf897a20ba782b5adb9->m_type_description == NULL);
    frame_be671536aca9dbf897a20ba782b5adb9 = cache_frame_be671536aca9dbf897a20ba782b5adb9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_be671536aca9dbf897a20ba782b5adb9);
    assert(Py_REFCNT(frame_be671536aca9dbf897a20ba782b5adb9) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_be671536aca9dbf897a20ba782b5adb9->m_frame.f_lineno = 453;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 453;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be671536aca9dbf897a20ba782b5adb9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be671536aca9dbf897a20ba782b5adb9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be671536aca9dbf897a20ba782b5adb9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be671536aca9dbf897a20ba782b5adb9,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_be671536aca9dbf897a20ba782b5adb9 == cache_frame_be671536aca9dbf897a20ba782b5adb9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be671536aca9dbf897a20ba782b5adb9);
        cache_frame_be671536aca9dbf897a20ba782b5adb9 = NULL;
    }

    assertFrameObject(frame_be671536aca9dbf897a20ba782b5adb9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__18_denormalize_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_1ab3cd55d56c70090f637923d7a67808;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ab3cd55d56c70090f637923d7a67808 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ab3cd55d56c70090f637923d7a67808)) {
        Py_XDECREF(cache_frame_1ab3cd55d56c70090f637923d7a67808);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ab3cd55d56c70090f637923d7a67808 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ab3cd55d56c70090f637923d7a67808 = MAKE_FUNCTION_FRAME(tstate, codeobj_1ab3cd55d56c70090f637923d7a67808, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ab3cd55d56c70090f637923d7a67808->m_type_description == NULL);
    frame_1ab3cd55d56c70090f637923d7a67808 = cache_frame_1ab3cd55d56c70090f637923d7a67808;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1ab3cd55d56c70090f637923d7a67808);
    assert(Py_REFCNT(frame_1ab3cd55d56c70090f637923d7a67808) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_1ab3cd55d56c70090f637923d7a67808->m_frame.f_lineno = 463;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 463;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1ab3cd55d56c70090f637923d7a67808, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ab3cd55d56c70090f637923d7a67808->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ab3cd55d56c70090f637923d7a67808, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ab3cd55d56c70090f637923d7a67808,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_1ab3cd55d56c70090f637923d7a67808 == cache_frame_1ab3cd55d56c70090f637923d7a67808) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ab3cd55d56c70090f637923d7a67808);
        cache_frame_1ab3cd55d56c70090f637923d7a67808 = NULL;
    }

    assertFrameObject(frame_1ab3cd55d56c70090f637923d7a67808);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__19_has_table(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_181ea63555b19de5ae44cd886887233e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_181ea63555b19de5ae44cd886887233e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_181ea63555b19de5ae44cd886887233e)) {
        Py_XDECREF(cache_frame_181ea63555b19de5ae44cd886887233e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_181ea63555b19de5ae44cd886887233e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_181ea63555b19de5ae44cd886887233e = MAKE_FUNCTION_FRAME(tstate, codeobj_181ea63555b19de5ae44cd886887233e, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_181ea63555b19de5ae44cd886887233e->m_type_description == NULL);
    frame_181ea63555b19de5ae44cd886887233e = cache_frame_181ea63555b19de5ae44cd886887233e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_181ea63555b19de5ae44cd886887233e);
    assert(Py_REFCNT(frame_181ea63555b19de5ae44cd886887233e) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_181ea63555b19de5ae44cd886887233e->m_frame.f_lineno = 487;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 487;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_181ea63555b19de5ae44cd886887233e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_181ea63555b19de5ae44cd886887233e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_181ea63555b19de5ae44cd886887233e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_181ea63555b19de5ae44cd886887233e,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_181ea63555b19de5ae44cd886887233e == cache_frame_181ea63555b19de5ae44cd886887233e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_181ea63555b19de5ae44cd886887233e);
        cache_frame_181ea63555b19de5ae44cd886887233e = NULL;
    }

    assertFrameObject(frame_181ea63555b19de5ae44cd886887233e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__20_has_index(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_index_name = python_pars[3];
    PyObject *par_schema = python_pars[4];
    struct Nuitka_FrameObject *frame_c0e1bec1ac978d2ac3f4b25347fa9997;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997)) {
        Py_XDECREF(cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997 = MAKE_FUNCTION_FRAME(tstate, codeobj_c0e1bec1ac978d2ac3f4b25347fa9997, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997->m_type_description == NULL);
    frame_c0e1bec1ac978d2ac3f4b25347fa9997 = cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c0e1bec1ac978d2ac3f4b25347fa9997);
    assert(Py_REFCNT(frame_c0e1bec1ac978d2ac3f4b25347fa9997) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_c0e1bec1ac978d2ac3f4b25347fa9997->m_frame.f_lineno = 505;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 505;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c0e1bec1ac978d2ac3f4b25347fa9997, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0e1bec1ac978d2ac3f4b25347fa9997->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0e1bec1ac978d2ac3f4b25347fa9997, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0e1bec1ac978d2ac3f4b25347fa9997,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_index_name,
        par_schema
    );


    // Release cached frame if used for exception.
    if (frame_c0e1bec1ac978d2ac3f4b25347fa9997 == cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997);
        cache_frame_c0e1bec1ac978d2ac3f4b25347fa9997 = NULL;
    }

    assertFrameObject(frame_c0e1bec1ac978d2ac3f4b25347fa9997);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_index_name);
    Py_DECREF(par_index_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__21_has_sequence(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_sequence_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_5dea653d63f9f1c98c2a1a33c56d8f4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c)) {
        Py_XDECREF(cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c = MAKE_FUNCTION_FRAME(tstate, codeobj_5dea653d63f9f1c98c2a1a33c56d8f4c, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c->m_type_description == NULL);
    frame_5dea653d63f9f1c98c2a1a33c56d8f4c = cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5dea653d63f9f1c98c2a1a33c56d8f4c);
    assert(Py_REFCNT(frame_5dea653d63f9f1c98c2a1a33c56d8f4c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_5dea653d63f9f1c98c2a1a33c56d8f4c->m_frame.f_lineno = 515;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 515;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5dea653d63f9f1c98c2a1a33c56d8f4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5dea653d63f9f1c98c2a1a33c56d8f4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5dea653d63f9f1c98c2a1a33c56d8f4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5dea653d63f9f1c98c2a1a33c56d8f4c,
        type_description_1,
        par_self,
        par_connection,
        par_sequence_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_5dea653d63f9f1c98c2a1a33c56d8f4c == cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c);
        cache_frame_5dea653d63f9f1c98c2a1a33c56d8f4c = NULL;
    }

    assertFrameObject(frame_5dea653d63f9f1c98c2a1a33c56d8f4c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_sequence_name);
    Py_DECREF(par_sequence_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_e93973ed29b84bbcc2e3d12f3d086de1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e93973ed29b84bbcc2e3d12f3d086de1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e93973ed29b84bbcc2e3d12f3d086de1)) {
        Py_XDECREF(cache_frame_e93973ed29b84bbcc2e3d12f3d086de1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e93973ed29b84bbcc2e3d12f3d086de1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e93973ed29b84bbcc2e3d12f3d086de1 = MAKE_FUNCTION_FRAME(tstate, codeobj_e93973ed29b84bbcc2e3d12f3d086de1, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e93973ed29b84bbcc2e3d12f3d086de1->m_type_description == NULL);
    frame_e93973ed29b84bbcc2e3d12f3d086de1 = cache_frame_e93973ed29b84bbcc2e3d12f3d086de1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e93973ed29b84bbcc2e3d12f3d086de1);
    assert(Py_REFCNT(frame_e93973ed29b84bbcc2e3d12f3d086de1) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_e93973ed29b84bbcc2e3d12f3d086de1->m_frame.f_lineno = 526;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 526;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e93973ed29b84bbcc2e3d12f3d086de1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e93973ed29b84bbcc2e3d12f3d086de1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e93973ed29b84bbcc2e3d12f3d086de1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e93973ed29b84bbcc2e3d12f3d086de1,
        type_description_1,
        par_self,
        par_connection
    );


    // Release cached frame if used for exception.
    if (frame_e93973ed29b84bbcc2e3d12f3d086de1 == cache_frame_e93973ed29b84bbcc2e3d12f3d086de1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e93973ed29b84bbcc2e3d12f3d086de1);
        cache_frame_e93973ed29b84bbcc2e3d12f3d086de1 = NULL;
    }

    assertFrameObject(frame_e93973ed29b84bbcc2e3d12f3d086de1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_9ab830e43cfb69b3ac8200abe9cd8b1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c)) {
        Py_XDECREF(cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c = MAKE_FUNCTION_FRAME(tstate, codeobj_9ab830e43cfb69b3ac8200abe9cd8b1c, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c->m_type_description == NULL);
    frame_9ab830e43cfb69b3ac8200abe9cd8b1c = cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9ab830e43cfb69b3ac8200abe9cd8b1c);
    assert(Py_REFCNT(frame_9ab830e43cfb69b3ac8200abe9cd8b1c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_9ab830e43cfb69b3ac8200abe9cd8b1c->m_frame.f_lineno = 538;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 538;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ab830e43cfb69b3ac8200abe9cd8b1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ab830e43cfb69b3ac8200abe9cd8b1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ab830e43cfb69b3ac8200abe9cd8b1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ab830e43cfb69b3ac8200abe9cd8b1c,
        type_description_1,
        par_self,
        par_connection
    );


    // Release cached frame if used for exception.
    if (frame_9ab830e43cfb69b3ac8200abe9cd8b1c == cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c);
        cache_frame_9ab830e43cfb69b3ac8200abe9cd8b1c = NULL;
    }

    assertFrameObject(frame_9ab830e43cfb69b3ac8200abe9cd8b1c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__24_do_begin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_80473fc57a7d4a378e8aa083187e0c6e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80473fc57a7d4a378e8aa083187e0c6e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80473fc57a7d4a378e8aa083187e0c6e)) {
        Py_XDECREF(cache_frame_80473fc57a7d4a378e8aa083187e0c6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80473fc57a7d4a378e8aa083187e0c6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80473fc57a7d4a378e8aa083187e0c6e = MAKE_FUNCTION_FRAME(tstate, codeobj_80473fc57a7d4a378e8aa083187e0c6e, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80473fc57a7d4a378e8aa083187e0c6e->m_type_description == NULL);
    frame_80473fc57a7d4a378e8aa083187e0c6e = cache_frame_80473fc57a7d4a378e8aa083187e0c6e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_80473fc57a7d4a378e8aa083187e0c6e);
    assert(Py_REFCNT(frame_80473fc57a7d4a378e8aa083187e0c6e) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_80473fc57a7d4a378e8aa083187e0c6e->m_frame.f_lineno = 562;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 562;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_80473fc57a7d4a378e8aa083187e0c6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80473fc57a7d4a378e8aa083187e0c6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80473fc57a7d4a378e8aa083187e0c6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80473fc57a7d4a378e8aa083187e0c6e,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_80473fc57a7d4a378e8aa083187e0c6e == cache_frame_80473fc57a7d4a378e8aa083187e0c6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80473fc57a7d4a378e8aa083187e0c6e);
        cache_frame_80473fc57a7d4a378e8aa083187e0c6e = NULL;
    }

    assertFrameObject(frame_80473fc57a7d4a378e8aa083187e0c6e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__25_do_rollback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_0b0f4064a77880c2b506363fc3546d00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0b0f4064a77880c2b506363fc3546d00 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b0f4064a77880c2b506363fc3546d00)) {
        Py_XDECREF(cache_frame_0b0f4064a77880c2b506363fc3546d00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b0f4064a77880c2b506363fc3546d00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b0f4064a77880c2b506363fc3546d00 = MAKE_FUNCTION_FRAME(tstate, codeobj_0b0f4064a77880c2b506363fc3546d00, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b0f4064a77880c2b506363fc3546d00->m_type_description == NULL);
    frame_0b0f4064a77880c2b506363fc3546d00 = cache_frame_0b0f4064a77880c2b506363fc3546d00;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0b0f4064a77880c2b506363fc3546d00);
    assert(Py_REFCNT(frame_0b0f4064a77880c2b506363fc3546d00) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_0b0f4064a77880c2b506363fc3546d00->m_frame.f_lineno = 573;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 573;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b0f4064a77880c2b506363fc3546d00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b0f4064a77880c2b506363fc3546d00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b0f4064a77880c2b506363fc3546d00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b0f4064a77880c2b506363fc3546d00,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_0b0f4064a77880c2b506363fc3546d00 == cache_frame_0b0f4064a77880c2b506363fc3546d00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b0f4064a77880c2b506363fc3546d00);
        cache_frame_0b0f4064a77880c2b506363fc3546d00 = NULL;
    }

    assertFrameObject(frame_0b0f4064a77880c2b506363fc3546d00);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__26_do_commit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_ae09f2574b7af74f5868a89212fd5279;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae09f2574b7af74f5868a89212fd5279 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae09f2574b7af74f5868a89212fd5279)) {
        Py_XDECREF(cache_frame_ae09f2574b7af74f5868a89212fd5279);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae09f2574b7af74f5868a89212fd5279 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae09f2574b7af74f5868a89212fd5279 = MAKE_FUNCTION_FRAME(tstate, codeobj_ae09f2574b7af74f5868a89212fd5279, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae09f2574b7af74f5868a89212fd5279->m_type_description == NULL);
    frame_ae09f2574b7af74f5868a89212fd5279 = cache_frame_ae09f2574b7af74f5868a89212fd5279;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ae09f2574b7af74f5868a89212fd5279);
    assert(Py_REFCNT(frame_ae09f2574b7af74f5868a89212fd5279) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_ae09f2574b7af74f5868a89212fd5279->m_frame.f_lineno = 584;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 584;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae09f2574b7af74f5868a89212fd5279, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae09f2574b7af74f5868a89212fd5279->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae09f2574b7af74f5868a89212fd5279, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae09f2574b7af74f5868a89212fd5279,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_ae09f2574b7af74f5868a89212fd5279 == cache_frame_ae09f2574b7af74f5868a89212fd5279) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae09f2574b7af74f5868a89212fd5279);
        cache_frame_ae09f2574b7af74f5868a89212fd5279 = NULL;
    }

    assertFrameObject(frame_ae09f2574b7af74f5868a89212fd5279);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__27_do_terminate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_9526f2870dd6530b108adf0a08aa8a08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9526f2870dd6530b108adf0a08aa8a08 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9526f2870dd6530b108adf0a08aa8a08)) {
        Py_XDECREF(cache_frame_9526f2870dd6530b108adf0a08aa8a08);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9526f2870dd6530b108adf0a08aa8a08 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9526f2870dd6530b108adf0a08aa8a08 = MAKE_FUNCTION_FRAME(tstate, codeobj_9526f2870dd6530b108adf0a08aa8a08, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9526f2870dd6530b108adf0a08aa8a08->m_type_description == NULL);
    frame_9526f2870dd6530b108adf0a08aa8a08 = cache_frame_9526f2870dd6530b108adf0a08aa8a08;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9526f2870dd6530b108adf0a08aa8a08);
    assert(Py_REFCNT(frame_9526f2870dd6530b108adf0a08aa8a08) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_9526f2870dd6530b108adf0a08aa8a08->m_frame.f_lineno = 601;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 601;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9526f2870dd6530b108adf0a08aa8a08, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9526f2870dd6530b108adf0a08aa8a08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9526f2870dd6530b108adf0a08aa8a08, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9526f2870dd6530b108adf0a08aa8a08,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_9526f2870dd6530b108adf0a08aa8a08 == cache_frame_9526f2870dd6530b108adf0a08aa8a08) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9526f2870dd6530b108adf0a08aa8a08);
        cache_frame_9526f2870dd6530b108adf0a08aa8a08 = NULL;
    }

    assertFrameObject(frame_9526f2870dd6530b108adf0a08aa8a08);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__28_do_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_284f0a540dc90f535a4d0314cd045499;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_284f0a540dc90f535a4d0314cd045499 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_284f0a540dc90f535a4d0314cd045499)) {
        Py_XDECREF(cache_frame_284f0a540dc90f535a4d0314cd045499);

#if _DEBUG_REFCOUNTS
        if (cache_frame_284f0a540dc90f535a4d0314cd045499 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_284f0a540dc90f535a4d0314cd045499 = MAKE_FUNCTION_FRAME(tstate, codeobj_284f0a540dc90f535a4d0314cd045499, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_284f0a540dc90f535a4d0314cd045499->m_type_description == NULL);
    frame_284f0a540dc90f535a4d0314cd045499 = cache_frame_284f0a540dc90f535a4d0314cd045499;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_284f0a540dc90f535a4d0314cd045499);
    assert(Py_REFCNT(frame_284f0a540dc90f535a4d0314cd045499) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_284f0a540dc90f535a4d0314cd045499->m_frame.f_lineno = 614;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 614;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_284f0a540dc90f535a4d0314cd045499, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_284f0a540dc90f535a4d0314cd045499->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_284f0a540dc90f535a4d0314cd045499, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_284f0a540dc90f535a4d0314cd045499,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_284f0a540dc90f535a4d0314cd045499 == cache_frame_284f0a540dc90f535a4d0314cd045499) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_284f0a540dc90f535a4d0314cd045499);
        cache_frame_284f0a540dc90f535a4d0314cd045499 = NULL;
    }

    assertFrameObject(frame_284f0a540dc90f535a4d0314cd045499);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__29_do_set_input_sizes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cursor = python_pars[1];
    PyObject *par_list_of_tuples = python_pars[2];
    PyObject *par_context = python_pars[3];
    struct Nuitka_FrameObject *frame_2cd16af480bb579cc1d09f05f5d04e3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2cd16af480bb579cc1d09f05f5d04e3f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2cd16af480bb579cc1d09f05f5d04e3f)) {
        Py_XDECREF(cache_frame_2cd16af480bb579cc1d09f05f5d04e3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2cd16af480bb579cc1d09f05f5d04e3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2cd16af480bb579cc1d09f05f5d04e3f = MAKE_FUNCTION_FRAME(tstate, codeobj_2cd16af480bb579cc1d09f05f5d04e3f, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2cd16af480bb579cc1d09f05f5d04e3f->m_type_description == NULL);
    frame_2cd16af480bb579cc1d09f05f5d04e3f = cache_frame_2cd16af480bb579cc1d09f05f5d04e3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2cd16af480bb579cc1d09f05f5d04e3f);
    assert(Py_REFCNT(frame_2cd16af480bb579cc1d09f05f5d04e3f) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_2cd16af480bb579cc1d09f05f5d04e3f->m_frame.f_lineno = 629;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 629;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2cd16af480bb579cc1d09f05f5d04e3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2cd16af480bb579cc1d09f05f5d04e3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2cd16af480bb579cc1d09f05f5d04e3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2cd16af480bb579cc1d09f05f5d04e3f,
        type_description_1,
        par_self,
        par_cursor,
        par_list_of_tuples,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_2cd16af480bb579cc1d09f05f5d04e3f == cache_frame_2cd16af480bb579cc1d09f05f5d04e3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2cd16af480bb579cc1d09f05f5d04e3f);
        cache_frame_2cd16af480bb579cc1d09f05f5d04e3f = NULL;
    }

    assertFrameObject(frame_2cd16af480bb579cc1d09f05f5d04e3f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_list_of_tuples);
    Py_DECREF(par_list_of_tuples);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__30_create_xid(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f7492d48a1f0b019bb7ef3895c7f746c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f7492d48a1f0b019bb7ef3895c7f746c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f7492d48a1f0b019bb7ef3895c7f746c)) {
        Py_XDECREF(cache_frame_f7492d48a1f0b019bb7ef3895c7f746c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7492d48a1f0b019bb7ef3895c7f746c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7492d48a1f0b019bb7ef3895c7f746c = MAKE_FUNCTION_FRAME(tstate, codeobj_f7492d48a1f0b019bb7ef3895c7f746c, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7492d48a1f0b019bb7ef3895c7f746c->m_type_description == NULL);
    frame_f7492d48a1f0b019bb7ef3895c7f746c = cache_frame_f7492d48a1f0b019bb7ef3895c7f746c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f7492d48a1f0b019bb7ef3895c7f746c);
    assert(Py_REFCNT(frame_f7492d48a1f0b019bb7ef3895c7f746c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_f7492d48a1f0b019bb7ef3895c7f746c->m_frame.f_lineno = 639;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 639;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7492d48a1f0b019bb7ef3895c7f746c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7492d48a1f0b019bb7ef3895c7f746c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7492d48a1f0b019bb7ef3895c7f746c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7492d48a1f0b019bb7ef3895c7f746c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f7492d48a1f0b019bb7ef3895c7f746c == cache_frame_f7492d48a1f0b019bb7ef3895c7f746c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7492d48a1f0b019bb7ef3895c7f746c);
        cache_frame_f7492d48a1f0b019bb7ef3895c7f746c = NULL;
    }

    assertFrameObject(frame_f7492d48a1f0b019bb7ef3895c7f746c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__31_do_savepoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_48abee30760cfc4dda96e3ec969d9444;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_48abee30760cfc4dda96e3ec969d9444 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_48abee30760cfc4dda96e3ec969d9444)) {
        Py_XDECREF(cache_frame_48abee30760cfc4dda96e3ec969d9444);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48abee30760cfc4dda96e3ec969d9444 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48abee30760cfc4dda96e3ec969d9444 = MAKE_FUNCTION_FRAME(tstate, codeobj_48abee30760cfc4dda96e3ec969d9444, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48abee30760cfc4dda96e3ec969d9444->m_type_description == NULL);
    frame_48abee30760cfc4dda96e3ec969d9444 = cache_frame_48abee30760cfc4dda96e3ec969d9444;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_48abee30760cfc4dda96e3ec969d9444);
    assert(Py_REFCNT(frame_48abee30760cfc4dda96e3ec969d9444) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_48abee30760cfc4dda96e3ec969d9444->m_frame.f_lineno = 649;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 649;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48abee30760cfc4dda96e3ec969d9444, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48abee30760cfc4dda96e3ec969d9444->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48abee30760cfc4dda96e3ec969d9444, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48abee30760cfc4dda96e3ec969d9444,
        type_description_1,
        par_self,
        par_connection,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_48abee30760cfc4dda96e3ec969d9444 == cache_frame_48abee30760cfc4dda96e3ec969d9444) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48abee30760cfc4dda96e3ec969d9444);
        cache_frame_48abee30760cfc4dda96e3ec969d9444 = NULL;
    }

    assertFrameObject(frame_48abee30760cfc4dda96e3ec969d9444);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__32_do_rollback_to_savepoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_775edc32dd7227360ae72391dd44d412;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_775edc32dd7227360ae72391dd44d412 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_775edc32dd7227360ae72391dd44d412)) {
        Py_XDECREF(cache_frame_775edc32dd7227360ae72391dd44d412);

#if _DEBUG_REFCOUNTS
        if (cache_frame_775edc32dd7227360ae72391dd44d412 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_775edc32dd7227360ae72391dd44d412 = MAKE_FUNCTION_FRAME(tstate, codeobj_775edc32dd7227360ae72391dd44d412, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_775edc32dd7227360ae72391dd44d412->m_type_description == NULL);
    frame_775edc32dd7227360ae72391dd44d412 = cache_frame_775edc32dd7227360ae72391dd44d412;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_775edc32dd7227360ae72391dd44d412);
    assert(Py_REFCNT(frame_775edc32dd7227360ae72391dd44d412) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_775edc32dd7227360ae72391dd44d412->m_frame.f_lineno = 659;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 659;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_775edc32dd7227360ae72391dd44d412, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_775edc32dd7227360ae72391dd44d412->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_775edc32dd7227360ae72391dd44d412, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_775edc32dd7227360ae72391dd44d412,
        type_description_1,
        par_self,
        par_connection,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_775edc32dd7227360ae72391dd44d412 == cache_frame_775edc32dd7227360ae72391dd44d412) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_775edc32dd7227360ae72391dd44d412);
        cache_frame_775edc32dd7227360ae72391dd44d412 = NULL;
    }

    assertFrameObject(frame_775edc32dd7227360ae72391dd44d412);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__33_do_release_savepoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_dde0d6f0043982febb8030ad96d59943;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dde0d6f0043982febb8030ad96d59943 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dde0d6f0043982febb8030ad96d59943)) {
        Py_XDECREF(cache_frame_dde0d6f0043982febb8030ad96d59943);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dde0d6f0043982febb8030ad96d59943 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dde0d6f0043982febb8030ad96d59943 = MAKE_FUNCTION_FRAME(tstate, codeobj_dde0d6f0043982febb8030ad96d59943, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dde0d6f0043982febb8030ad96d59943->m_type_description == NULL);
    frame_dde0d6f0043982febb8030ad96d59943 = cache_frame_dde0d6f0043982febb8030ad96d59943;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dde0d6f0043982febb8030ad96d59943);
    assert(Py_REFCNT(frame_dde0d6f0043982febb8030ad96d59943) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_dde0d6f0043982febb8030ad96d59943->m_frame.f_lineno = 668;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 668;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dde0d6f0043982febb8030ad96d59943, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dde0d6f0043982febb8030ad96d59943->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dde0d6f0043982febb8030ad96d59943, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dde0d6f0043982febb8030ad96d59943,
        type_description_1,
        par_self,
        par_connection,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_dde0d6f0043982febb8030ad96d59943 == cache_frame_dde0d6f0043982febb8030ad96d59943) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dde0d6f0043982febb8030ad96d59943);
        cache_frame_dde0d6f0043982febb8030ad96d59943 = NULL;
    }

    assertFrameObject(frame_dde0d6f0043982febb8030ad96d59943);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__34_do_begin_twophase(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_xid = python_pars[2];
    struct Nuitka_FrameObject *frame_d34008cf9a17762c48d835a18e11f583;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d34008cf9a17762c48d835a18e11f583 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d34008cf9a17762c48d835a18e11f583)) {
        Py_XDECREF(cache_frame_d34008cf9a17762c48d835a18e11f583);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d34008cf9a17762c48d835a18e11f583 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d34008cf9a17762c48d835a18e11f583 = MAKE_FUNCTION_FRAME(tstate, codeobj_d34008cf9a17762c48d835a18e11f583, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d34008cf9a17762c48d835a18e11f583->m_type_description == NULL);
    frame_d34008cf9a17762c48d835a18e11f583 = cache_frame_d34008cf9a17762c48d835a18e11f583;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d34008cf9a17762c48d835a18e11f583);
    assert(Py_REFCNT(frame_d34008cf9a17762c48d835a18e11f583) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d34008cf9a17762c48d835a18e11f583->m_frame.f_lineno = 678;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 678;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d34008cf9a17762c48d835a18e11f583, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d34008cf9a17762c48d835a18e11f583->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d34008cf9a17762c48d835a18e11f583, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d34008cf9a17762c48d835a18e11f583,
        type_description_1,
        par_self,
        par_connection,
        par_xid
    );


    // Release cached frame if used for exception.
    if (frame_d34008cf9a17762c48d835a18e11f583 == cache_frame_d34008cf9a17762c48d835a18e11f583) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d34008cf9a17762c48d835a18e11f583);
        cache_frame_d34008cf9a17762c48d835a18e11f583 = NULL;
    }

    assertFrameObject(frame_d34008cf9a17762c48d835a18e11f583);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_xid);
    Py_DECREF(par_xid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__35_do_prepare_twophase(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_xid = python_pars[2];
    struct Nuitka_FrameObject *frame_0af7543a7927b1c14046912fe8a1cb6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0af7543a7927b1c14046912fe8a1cb6b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0af7543a7927b1c14046912fe8a1cb6b)) {
        Py_XDECREF(cache_frame_0af7543a7927b1c14046912fe8a1cb6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0af7543a7927b1c14046912fe8a1cb6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0af7543a7927b1c14046912fe8a1cb6b = MAKE_FUNCTION_FRAME(tstate, codeobj_0af7543a7927b1c14046912fe8a1cb6b, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0af7543a7927b1c14046912fe8a1cb6b->m_type_description == NULL);
    frame_0af7543a7927b1c14046912fe8a1cb6b = cache_frame_0af7543a7927b1c14046912fe8a1cb6b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0af7543a7927b1c14046912fe8a1cb6b);
    assert(Py_REFCNT(frame_0af7543a7927b1c14046912fe8a1cb6b) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_0af7543a7927b1c14046912fe8a1cb6b->m_frame.f_lineno = 688;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 688;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0af7543a7927b1c14046912fe8a1cb6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0af7543a7927b1c14046912fe8a1cb6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0af7543a7927b1c14046912fe8a1cb6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0af7543a7927b1c14046912fe8a1cb6b,
        type_description_1,
        par_self,
        par_connection,
        par_xid
    );


    // Release cached frame if used for exception.
    if (frame_0af7543a7927b1c14046912fe8a1cb6b == cache_frame_0af7543a7927b1c14046912fe8a1cb6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0af7543a7927b1c14046912fe8a1cb6b);
        cache_frame_0af7543a7927b1c14046912fe8a1cb6b = NULL;
    }

    assertFrameObject(frame_0af7543a7927b1c14046912fe8a1cb6b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_xid);
    Py_DECREF(par_xid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__36_do_rollback_twophase(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_xid = python_pars[2];
    PyObject *par_is_prepared = python_pars[3];
    PyObject *par_recover = python_pars[4];
    struct Nuitka_FrameObject *frame_eb782cabb4fdf8b137233237c69e731d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb782cabb4fdf8b137233237c69e731d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb782cabb4fdf8b137233237c69e731d)) {
        Py_XDECREF(cache_frame_eb782cabb4fdf8b137233237c69e731d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb782cabb4fdf8b137233237c69e731d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb782cabb4fdf8b137233237c69e731d = MAKE_FUNCTION_FRAME(tstate, codeobj_eb782cabb4fdf8b137233237c69e731d, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb782cabb4fdf8b137233237c69e731d->m_type_description == NULL);
    frame_eb782cabb4fdf8b137233237c69e731d = cache_frame_eb782cabb4fdf8b137233237c69e731d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_eb782cabb4fdf8b137233237c69e731d);
    assert(Py_REFCNT(frame_eb782cabb4fdf8b137233237c69e731d) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_eb782cabb4fdf8b137233237c69e731d->m_frame.f_lineno = 703;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 703;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eb782cabb4fdf8b137233237c69e731d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb782cabb4fdf8b137233237c69e731d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb782cabb4fdf8b137233237c69e731d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb782cabb4fdf8b137233237c69e731d,
        type_description_1,
        par_self,
        par_connection,
        par_xid,
        par_is_prepared,
        par_recover
    );


    // Release cached frame if used for exception.
    if (frame_eb782cabb4fdf8b137233237c69e731d == cache_frame_eb782cabb4fdf8b137233237c69e731d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb782cabb4fdf8b137233237c69e731d);
        cache_frame_eb782cabb4fdf8b137233237c69e731d = NULL;
    }

    assertFrameObject(frame_eb782cabb4fdf8b137233237c69e731d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_xid);
    Py_DECREF(par_xid);
    CHECK_OBJECT(par_is_prepared);
    Py_DECREF(par_is_prepared);
    CHECK_OBJECT(par_recover);
    Py_DECREF(par_recover);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__37_do_commit_twophase(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_xid = python_pars[2];
    PyObject *par_is_prepared = python_pars[3];
    PyObject *par_recover = python_pars[4];
    struct Nuitka_FrameObject *frame_e61e88b4d18f7eadd6371203f798954b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e61e88b4d18f7eadd6371203f798954b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e61e88b4d18f7eadd6371203f798954b)) {
        Py_XDECREF(cache_frame_e61e88b4d18f7eadd6371203f798954b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e61e88b4d18f7eadd6371203f798954b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e61e88b4d18f7eadd6371203f798954b = MAKE_FUNCTION_FRAME(tstate, codeobj_e61e88b4d18f7eadd6371203f798954b, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e61e88b4d18f7eadd6371203f798954b->m_type_description == NULL);
    frame_e61e88b4d18f7eadd6371203f798954b = cache_frame_e61e88b4d18f7eadd6371203f798954b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e61e88b4d18f7eadd6371203f798954b);
    assert(Py_REFCNT(frame_e61e88b4d18f7eadd6371203f798954b) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_e61e88b4d18f7eadd6371203f798954b->m_frame.f_lineno = 719;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 719;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e61e88b4d18f7eadd6371203f798954b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e61e88b4d18f7eadd6371203f798954b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e61e88b4d18f7eadd6371203f798954b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e61e88b4d18f7eadd6371203f798954b,
        type_description_1,
        par_self,
        par_connection,
        par_xid,
        par_is_prepared,
        par_recover
    );


    // Release cached frame if used for exception.
    if (frame_e61e88b4d18f7eadd6371203f798954b == cache_frame_e61e88b4d18f7eadd6371203f798954b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e61e88b4d18f7eadd6371203f798954b);
        cache_frame_e61e88b4d18f7eadd6371203f798954b = NULL;
    }

    assertFrameObject(frame_e61e88b4d18f7eadd6371203f798954b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_xid);
    Py_DECREF(par_xid);
    CHECK_OBJECT(par_is_prepared);
    Py_DECREF(par_is_prepared);
    CHECK_OBJECT(par_recover);
    Py_DECREF(par_recover);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__38_do_recover_twophase(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_38fd12787c6477618e65682474efef1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_38fd12787c6477618e65682474efef1f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_38fd12787c6477618e65682474efef1f)) {
        Py_XDECREF(cache_frame_38fd12787c6477618e65682474efef1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38fd12787c6477618e65682474efef1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38fd12787c6477618e65682474efef1f = MAKE_FUNCTION_FRAME(tstate, codeobj_38fd12787c6477618e65682474efef1f, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38fd12787c6477618e65682474efef1f->m_type_description == NULL);
    frame_38fd12787c6477618e65682474efef1f = cache_frame_38fd12787c6477618e65682474efef1f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_38fd12787c6477618e65682474efef1f);
    assert(Py_REFCNT(frame_38fd12787c6477618e65682474efef1f) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_38fd12787c6477618e65682474efef1f->m_frame.f_lineno = 729;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 729;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38fd12787c6477618e65682474efef1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38fd12787c6477618e65682474efef1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38fd12787c6477618e65682474efef1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38fd12787c6477618e65682474efef1f,
        type_description_1,
        par_self,
        par_connection
    );


    // Release cached frame if used for exception.
    if (frame_38fd12787c6477618e65682474efef1f == cache_frame_38fd12787c6477618e65682474efef1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38fd12787c6477618e65682474efef1f);
        cache_frame_38fd12787c6477618e65682474efef1f = NULL;
    }

    assertFrameObject(frame_38fd12787c6477618e65682474efef1f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__39_do_executemany(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cursor = python_pars[1];
    PyObject *par_statement = python_pars[2];
    PyObject *par_parameters = python_pars[3];
    PyObject *par_context = python_pars[4];
    struct Nuitka_FrameObject *frame_db5efa43feaa83e7c2fabd59c1e2f0df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df)) {
        Py_XDECREF(cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df = MAKE_FUNCTION_FRAME(tstate, codeobj_db5efa43feaa83e7c2fabd59c1e2f0df, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df->m_type_description == NULL);
    frame_db5efa43feaa83e7c2fabd59c1e2f0df = cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_db5efa43feaa83e7c2fabd59c1e2f0df);
    assert(Py_REFCNT(frame_db5efa43feaa83e7c2fabd59c1e2f0df) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_db5efa43feaa83e7c2fabd59c1e2f0df->m_frame.f_lineno = 735;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 735;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db5efa43feaa83e7c2fabd59c1e2f0df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db5efa43feaa83e7c2fabd59c1e2f0df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db5efa43feaa83e7c2fabd59c1e2f0df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db5efa43feaa83e7c2fabd59c1e2f0df,
        type_description_1,
        par_self,
        par_cursor,
        par_statement,
        par_parameters,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_db5efa43feaa83e7c2fabd59c1e2f0df == cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df);
        cache_frame_db5efa43feaa83e7c2fabd59c1e2f0df = NULL;
    }

    assertFrameObject(frame_db5efa43feaa83e7c2fabd59c1e2f0df);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__40_do_execute(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cursor = python_pars[1];
    PyObject *par_statement = python_pars[2];
    PyObject *par_parameters = python_pars[3];
    PyObject *par_context = python_pars[4];
    struct Nuitka_FrameObject *frame_2e4f178f61b1ddcdbf8513762ff17109;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2e4f178f61b1ddcdbf8513762ff17109 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2e4f178f61b1ddcdbf8513762ff17109)) {
        Py_XDECREF(cache_frame_2e4f178f61b1ddcdbf8513762ff17109);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e4f178f61b1ddcdbf8513762ff17109 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e4f178f61b1ddcdbf8513762ff17109 = MAKE_FUNCTION_FRAME(tstate, codeobj_2e4f178f61b1ddcdbf8513762ff17109, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e4f178f61b1ddcdbf8513762ff17109->m_type_description == NULL);
    frame_2e4f178f61b1ddcdbf8513762ff17109 = cache_frame_2e4f178f61b1ddcdbf8513762ff17109;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2e4f178f61b1ddcdbf8513762ff17109);
    assert(Py_REFCNT(frame_2e4f178f61b1ddcdbf8513762ff17109) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_2e4f178f61b1ddcdbf8513762ff17109->m_frame.f_lineno = 741;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 741;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2e4f178f61b1ddcdbf8513762ff17109, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e4f178f61b1ddcdbf8513762ff17109->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e4f178f61b1ddcdbf8513762ff17109, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e4f178f61b1ddcdbf8513762ff17109,
        type_description_1,
        par_self,
        par_cursor,
        par_statement,
        par_parameters,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_2e4f178f61b1ddcdbf8513762ff17109 == cache_frame_2e4f178f61b1ddcdbf8513762ff17109) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e4f178f61b1ddcdbf8513762ff17109);
        cache_frame_2e4f178f61b1ddcdbf8513762ff17109 = NULL;
    }

    assertFrameObject(frame_2e4f178f61b1ddcdbf8513762ff17109);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__41_do_execute_no_params(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cursor = python_pars[1];
    PyObject *par_statement = python_pars[2];
    PyObject *par_parameters = python_pars[3];
    PyObject *par_context = python_pars[4];
    struct Nuitka_FrameObject *frame_389302af75d847c462031ed53c14a853;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_389302af75d847c462031ed53c14a853 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_389302af75d847c462031ed53c14a853)) {
        Py_XDECREF(cache_frame_389302af75d847c462031ed53c14a853);

#if _DEBUG_REFCOUNTS
        if (cache_frame_389302af75d847c462031ed53c14a853 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_389302af75d847c462031ed53c14a853 = MAKE_FUNCTION_FRAME(tstate, codeobj_389302af75d847c462031ed53c14a853, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_389302af75d847c462031ed53c14a853->m_type_description == NULL);
    frame_389302af75d847c462031ed53c14a853 = cache_frame_389302af75d847c462031ed53c14a853;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_389302af75d847c462031ed53c14a853);
    assert(Py_REFCNT(frame_389302af75d847c462031ed53c14a853) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_389302af75d847c462031ed53c14a853->m_frame.f_lineno = 752;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 752;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_389302af75d847c462031ed53c14a853, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_389302af75d847c462031ed53c14a853->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_389302af75d847c462031ed53c14a853, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_389302af75d847c462031ed53c14a853,
        type_description_1,
        par_self,
        par_cursor,
        par_statement,
        par_parameters,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_389302af75d847c462031ed53c14a853 == cache_frame_389302af75d847c462031ed53c14a853) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_389302af75d847c462031ed53c14a853);
        cache_frame_389302af75d847c462031ed53c14a853 = NULL;
    }

    assertFrameObject(frame_389302af75d847c462031ed53c14a853);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__42_is_disconnect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    PyObject *par_connection = python_pars[2];
    PyObject *par_cursor = python_pars[3];
    struct Nuitka_FrameObject *frame_a3df05b143bf9792a0f72e5fa587d2de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a3df05b143bf9792a0f72e5fa587d2de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a3df05b143bf9792a0f72e5fa587d2de)) {
        Py_XDECREF(cache_frame_a3df05b143bf9792a0f72e5fa587d2de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a3df05b143bf9792a0f72e5fa587d2de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a3df05b143bf9792a0f72e5fa587d2de = MAKE_FUNCTION_FRAME(tstate, codeobj_a3df05b143bf9792a0f72e5fa587d2de, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a3df05b143bf9792a0f72e5fa587d2de->m_type_description == NULL);
    frame_a3df05b143bf9792a0f72e5fa587d2de = cache_frame_a3df05b143bf9792a0f72e5fa587d2de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a3df05b143bf9792a0f72e5fa587d2de);
    assert(Py_REFCNT(frame_a3df05b143bf9792a0f72e5fa587d2de) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_a3df05b143bf9792a0f72e5fa587d2de->m_frame.f_lineno = 758;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 758;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a3df05b143bf9792a0f72e5fa587d2de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a3df05b143bf9792a0f72e5fa587d2de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3df05b143bf9792a0f72e5fa587d2de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a3df05b143bf9792a0f72e5fa587d2de,
        type_description_1,
        par_self,
        par_e,
        par_connection,
        par_cursor
    );


    // Release cached frame if used for exception.
    if (frame_a3df05b143bf9792a0f72e5fa587d2de == cache_frame_a3df05b143bf9792a0f72e5fa587d2de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a3df05b143bf9792a0f72e5fa587d2de);
        cache_frame_a3df05b143bf9792a0f72e5fa587d2de = NULL;
    }

    assertFrameObject(frame_a3df05b143bf9792a0f72e5fa587d2de);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__44_on_connect_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    struct Nuitka_FrameObject *frame_f06bc8a915c4c7df2c09a4acf7ee308d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d)) {
        Py_XDECREF(cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d = MAKE_FUNCTION_FRAME(tstate, codeobj_f06bc8a915c4c7df2c09a4acf7ee308d, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d->m_type_description == NULL);
    frame_f06bc8a915c4c7df2c09a4acf7ee308d = cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f06bc8a915c4c7df2c09a4acf7ee308d);
    assert(Py_REFCNT(frame_f06bc8a915c4c7df2c09a4acf7ee308d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f06bc8a915c4c7df2c09a4acf7ee308d->m_frame.f_lineno = 852;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f06bc8a915c4c7df2c09a4acf7ee308d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f06bc8a915c4c7df2c09a4acf7ee308d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f06bc8a915c4c7df2c09a4acf7ee308d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f06bc8a915c4c7df2c09a4acf7ee308d,
        type_description_1,
        par_self,
        par_url
    );


    // Release cached frame if used for exception.
    if (frame_f06bc8a915c4c7df2c09a4acf7ee308d == cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d);
        cache_frame_f06bc8a915c4c7df2c09a4acf7ee308d = NULL;
    }

    assertFrameObject(frame_f06bc8a915c4c7df2c09a4acf7ee308d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__46_reset_isolation_level(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_286057e84fe06cf341ec8b0c66e9e9a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_286057e84fe06cf341ec8b0c66e9e9a3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_286057e84fe06cf341ec8b0c66e9e9a3)) {
        Py_XDECREF(cache_frame_286057e84fe06cf341ec8b0c66e9e9a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_286057e84fe06cf341ec8b0c66e9e9a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_286057e84fe06cf341ec8b0c66e9e9a3 = MAKE_FUNCTION_FRAME(tstate, codeobj_286057e84fe06cf341ec8b0c66e9e9a3, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_286057e84fe06cf341ec8b0c66e9e9a3->m_type_description == NULL);
    frame_286057e84fe06cf341ec8b0c66e9e9a3 = cache_frame_286057e84fe06cf341ec8b0c66e9e9a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_286057e84fe06cf341ec8b0c66e9e9a3);
    assert(Py_REFCNT(frame_286057e84fe06cf341ec8b0c66e9e9a3) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_286057e84fe06cf341ec8b0c66e9e9a3->m_frame.f_lineno = 932;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 932;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_286057e84fe06cf341ec8b0c66e9e9a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_286057e84fe06cf341ec8b0c66e9e9a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_286057e84fe06cf341ec8b0c66e9e9a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_286057e84fe06cf341ec8b0c66e9e9a3,
        type_description_1,
        par_self,
        par_dbapi_conn
    );


    // Release cached frame if used for exception.
    if (frame_286057e84fe06cf341ec8b0c66e9e9a3 == cache_frame_286057e84fe06cf341ec8b0c66e9e9a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_286057e84fe06cf341ec8b0c66e9e9a3);
        cache_frame_286057e84fe06cf341ec8b0c66e9e9a3 = NULL;
    }

    assertFrameObject(frame_286057e84fe06cf341ec8b0c66e9e9a3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_conn);
    Py_DECREF(par_dbapi_conn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__47_set_isolation_level(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_conn = python_pars[1];
    PyObject *par_level = python_pars[2];
    struct Nuitka_FrameObject *frame_4d65c3a5ac03c76a14ab72331133bd45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d65c3a5ac03c76a14ab72331133bd45 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d65c3a5ac03c76a14ab72331133bd45)) {
        Py_XDECREF(cache_frame_4d65c3a5ac03c76a14ab72331133bd45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d65c3a5ac03c76a14ab72331133bd45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d65c3a5ac03c76a14ab72331133bd45 = MAKE_FUNCTION_FRAME(tstate, codeobj_4d65c3a5ac03c76a14ab72331133bd45, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d65c3a5ac03c76a14ab72331133bd45->m_type_description == NULL);
    frame_4d65c3a5ac03c76a14ab72331133bd45 = cache_frame_4d65c3a5ac03c76a14ab72331133bd45;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4d65c3a5ac03c76a14ab72331133bd45);
    assert(Py_REFCNT(frame_4d65c3a5ac03c76a14ab72331133bd45) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_4d65c3a5ac03c76a14ab72331133bd45->m_frame.f_lineno = 959;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 959;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d65c3a5ac03c76a14ab72331133bd45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d65c3a5ac03c76a14ab72331133bd45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d65c3a5ac03c76a14ab72331133bd45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d65c3a5ac03c76a14ab72331133bd45,
        type_description_1,
        par_self,
        par_dbapi_conn,
        par_level
    );


    // Release cached frame if used for exception.
    if (frame_4d65c3a5ac03c76a14ab72331133bd45 == cache_frame_4d65c3a5ac03c76a14ab72331133bd45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d65c3a5ac03c76a14ab72331133bd45);
        cache_frame_4d65c3a5ac03c76a14ab72331133bd45 = NULL;
    }

    assertFrameObject(frame_4d65c3a5ac03c76a14ab72331133bd45);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_conn);
    Py_DECREF(par_dbapi_conn);
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__48_get_isolation_level(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_5225a6b8946df394aab3cd1af221eb97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5225a6b8946df394aab3cd1af221eb97 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5225a6b8946df394aab3cd1af221eb97)) {
        Py_XDECREF(cache_frame_5225a6b8946df394aab3cd1af221eb97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5225a6b8946df394aab3cd1af221eb97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5225a6b8946df394aab3cd1af221eb97 = MAKE_FUNCTION_FRAME(tstate, codeobj_5225a6b8946df394aab3cd1af221eb97, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5225a6b8946df394aab3cd1af221eb97->m_type_description == NULL);
    frame_5225a6b8946df394aab3cd1af221eb97 = cache_frame_5225a6b8946df394aab3cd1af221eb97;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5225a6b8946df394aab3cd1af221eb97);
    assert(Py_REFCNT(frame_5225a6b8946df394aab3cd1af221eb97) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_5225a6b8946df394aab3cd1af221eb97->m_frame.f_lineno = 992;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 992;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5225a6b8946df394aab3cd1af221eb97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5225a6b8946df394aab3cd1af221eb97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5225a6b8946df394aab3cd1af221eb97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5225a6b8946df394aab3cd1af221eb97,
        type_description_1,
        par_self,
        par_dbapi_conn
    );


    // Release cached frame if used for exception.
    if (frame_5225a6b8946df394aab3cd1af221eb97 == cache_frame_5225a6b8946df394aab3cd1af221eb97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5225a6b8946df394aab3cd1af221eb97);
        cache_frame_5225a6b8946df394aab3cd1af221eb97 = NULL;
    }

    assertFrameObject(frame_5225a6b8946df394aab3cd1af221eb97);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_conn);
    Py_DECREF(par_dbapi_conn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__49_get_default_isolation_level(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_77ddba100b47a973ff98b6272e1b8096;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_77ddba100b47a973ff98b6272e1b8096 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_77ddba100b47a973ff98b6272e1b8096)) {
        Py_XDECREF(cache_frame_77ddba100b47a973ff98b6272e1b8096);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77ddba100b47a973ff98b6272e1b8096 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77ddba100b47a973ff98b6272e1b8096 = MAKE_FUNCTION_FRAME(tstate, codeobj_77ddba100b47a973ff98b6272e1b8096, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_77ddba100b47a973ff98b6272e1b8096->m_type_description == NULL);
    frame_77ddba100b47a973ff98b6272e1b8096 = cache_frame_77ddba100b47a973ff98b6272e1b8096;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_77ddba100b47a973ff98b6272e1b8096);
    assert(Py_REFCNT(frame_77ddba100b47a973ff98b6272e1b8096) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_77ddba100b47a973ff98b6272e1b8096->m_frame.f_lineno = 1012;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1012;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77ddba100b47a973ff98b6272e1b8096, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77ddba100b47a973ff98b6272e1b8096->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77ddba100b47a973ff98b6272e1b8096, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77ddba100b47a973ff98b6272e1b8096,
        type_description_1,
        par_self,
        par_dbapi_conn
    );


    // Release cached frame if used for exception.
    if (frame_77ddba100b47a973ff98b6272e1b8096 == cache_frame_77ddba100b47a973ff98b6272e1b8096) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_77ddba100b47a973ff98b6272e1b8096);
        cache_frame_77ddba100b47a973ff98b6272e1b8096 = NULL;
    }

    assertFrameObject(frame_77ddba100b47a973ff98b6272e1b8096);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_conn);
    Py_DECREF(par_dbapi_conn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__50_get_dialect_cls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_cls);
    tmp_return_value = par_cls;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__53_get_driver_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_00492ef224eb5971e77376cd8a1723c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00492ef224eb5971e77376cd8a1723c3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00492ef224eb5971e77376cd8a1723c3)) {
        Py_XDECREF(cache_frame_00492ef224eb5971e77376cd8a1723c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00492ef224eb5971e77376cd8a1723c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00492ef224eb5971e77376cd8a1723c3 = MAKE_FUNCTION_FRAME(tstate, codeobj_00492ef224eb5971e77376cd8a1723c3, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00492ef224eb5971e77376cd8a1723c3->m_type_description == NULL);
    frame_00492ef224eb5971e77376cd8a1723c3 = cache_frame_00492ef224eb5971e77376cd8a1723c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_00492ef224eb5971e77376cd8a1723c3);
    assert(Py_REFCNT(frame_00492ef224eb5971e77376cd8a1723c3) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_00492ef224eb5971e77376cd8a1723c3->m_frame.f_lineno = 1091;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1091;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_00492ef224eb5971e77376cd8a1723c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00492ef224eb5971e77376cd8a1723c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00492ef224eb5971e77376cd8a1723c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00492ef224eb5971e77376cd8a1723c3,
        type_description_1,
        par_self,
        par_connection
    );


    // Release cached frame if used for exception.
    if (frame_00492ef224eb5971e77376cd8a1723c3 == cache_frame_00492ef224eb5971e77376cd8a1723c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00492ef224eb5971e77376cd8a1723c3);
        cache_frame_00492ef224eb5971e77376cd8a1723c3 = NULL;
    }

    assertFrameObject(frame_00492ef224eb5971e77376cd8a1723c3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__54___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_fec96f2b7a73018927f2fd169e07b728;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fec96f2b7a73018927f2fd169e07b728 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fec96f2b7a73018927f2fd169e07b728)) {
        Py_XDECREF(cache_frame_fec96f2b7a73018927f2fd169e07b728);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fec96f2b7a73018927f2fd169e07b728 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fec96f2b7a73018927f2fd169e07b728 = MAKE_FUNCTION_FRAME(tstate, codeobj_fec96f2b7a73018927f2fd169e07b728, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fec96f2b7a73018927f2fd169e07b728->m_type_description == NULL);
    frame_fec96f2b7a73018927f2fd169e07b728 = cache_frame_fec96f2b7a73018927f2fd169e07b728;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fec96f2b7a73018927f2fd169e07b728);
    assert(Py_REFCNT(frame_fec96f2b7a73018927f2fd169e07b728) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_url);
        tmp_assattr_value_1 = par_url;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1294;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fec96f2b7a73018927f2fd169e07b728, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fec96f2b7a73018927f2fd169e07b728->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fec96f2b7a73018927f2fd169e07b728, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fec96f2b7a73018927f2fd169e07b728,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_fec96f2b7a73018927f2fd169e07b728 == cache_frame_fec96f2b7a73018927f2fd169e07b728) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fec96f2b7a73018927f2fd169e07b728);
        cache_frame_fec96f2b7a73018927f2fd169e07b728 = NULL;
    }

    assertFrameObject(frame_fec96f2b7a73018927f2fd169e07b728);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__59_create_cursor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b642c3031fe8deaf95e5e2da21263fae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b642c3031fe8deaf95e5e2da21263fae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b642c3031fe8deaf95e5e2da21263fae)) {
        Py_XDECREF(cache_frame_b642c3031fe8deaf95e5e2da21263fae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b642c3031fe8deaf95e5e2da21263fae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b642c3031fe8deaf95e5e2da21263fae = MAKE_FUNCTION_FRAME(tstate, codeobj_b642c3031fe8deaf95e5e2da21263fae, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b642c3031fe8deaf95e5e2da21263fae->m_type_description == NULL);
    frame_b642c3031fe8deaf95e5e2da21263fae = cache_frame_b642c3031fe8deaf95e5e2da21263fae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b642c3031fe8deaf95e5e2da21263fae);
    assert(Py_REFCNT(frame_b642c3031fe8deaf95e5e2da21263fae) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_b642c3031fe8deaf95e5e2da21263fae->m_frame.f_lineno = 1395;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1395;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b642c3031fe8deaf95e5e2da21263fae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b642c3031fe8deaf95e5e2da21263fae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b642c3031fe8deaf95e5e2da21263fae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b642c3031fe8deaf95e5e2da21263fae,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b642c3031fe8deaf95e5e2da21263fae == cache_frame_b642c3031fe8deaf95e5e2da21263fae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b642c3031fe8deaf95e5e2da21263fae);
        cache_frame_b642c3031fe8deaf95e5e2da21263fae = NULL;
    }

    assertFrameObject(frame_b642c3031fe8deaf95e5e2da21263fae);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__60_pre_exec(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0f22b343563cbc1653267c94b111c05c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f22b343563cbc1653267c94b111c05c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f22b343563cbc1653267c94b111c05c)) {
        Py_XDECREF(cache_frame_0f22b343563cbc1653267c94b111c05c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f22b343563cbc1653267c94b111c05c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f22b343563cbc1653267c94b111c05c = MAKE_FUNCTION_FRAME(tstate, codeobj_0f22b343563cbc1653267c94b111c05c, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f22b343563cbc1653267c94b111c05c->m_type_description == NULL);
    frame_0f22b343563cbc1653267c94b111c05c = cache_frame_0f22b343563cbc1653267c94b111c05c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0f22b343563cbc1653267c94b111c05c);
    assert(Py_REFCNT(frame_0f22b343563cbc1653267c94b111c05c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_0f22b343563cbc1653267c94b111c05c->m_frame.f_lineno = 1405;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1405;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f22b343563cbc1653267c94b111c05c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f22b343563cbc1653267c94b111c05c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f22b343563cbc1653267c94b111c05c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f22b343563cbc1653267c94b111c05c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0f22b343563cbc1653267c94b111c05c == cache_frame_0f22b343563cbc1653267c94b111c05c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f22b343563cbc1653267c94b111c05c);
        cache_frame_0f22b343563cbc1653267c94b111c05c = NULL;
    }

    assertFrameObject(frame_0f22b343563cbc1653267c94b111c05c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__61_get_out_parameter_values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_out_param_names = python_pars[1];
    struct Nuitka_FrameObject *frame_47926f78d7d9e584e7c3432164b5e742;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_47926f78d7d9e584e7c3432164b5e742 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47926f78d7d9e584e7c3432164b5e742)) {
        Py_XDECREF(cache_frame_47926f78d7d9e584e7c3432164b5e742);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47926f78d7d9e584e7c3432164b5e742 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47926f78d7d9e584e7c3432164b5e742 = MAKE_FUNCTION_FRAME(tstate, codeobj_47926f78d7d9e584e7c3432164b5e742, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47926f78d7d9e584e7c3432164b5e742->m_type_description == NULL);
    frame_47926f78d7d9e584e7c3432164b5e742 = cache_frame_47926f78d7d9e584e7c3432164b5e742;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_47926f78d7d9e584e7c3432164b5e742);
    assert(Py_REFCNT(frame_47926f78d7d9e584e7c3432164b5e742) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_47926f78d7d9e584e7c3432164b5e742->m_frame.f_lineno = 1439;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1439;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47926f78d7d9e584e7c3432164b5e742, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47926f78d7d9e584e7c3432164b5e742->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47926f78d7d9e584e7c3432164b5e742, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47926f78d7d9e584e7c3432164b5e742,
        type_description_1,
        par_self,
        par_out_param_names
    );


    // Release cached frame if used for exception.
    if (frame_47926f78d7d9e584e7c3432164b5e742 == cache_frame_47926f78d7d9e584e7c3432164b5e742) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47926f78d7d9e584e7c3432164b5e742);
        cache_frame_47926f78d7d9e584e7c3432164b5e742 = NULL;
    }

    assertFrameObject(frame_47926f78d7d9e584e7c3432164b5e742);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_out_param_names);
    Py_DECREF(par_out_param_names);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__62_post_exec(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_07e23d38b405aacaa966c07d26c4c189;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_07e23d38b405aacaa966c07d26c4c189 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07e23d38b405aacaa966c07d26c4c189)) {
        Py_XDECREF(cache_frame_07e23d38b405aacaa966c07d26c4c189);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07e23d38b405aacaa966c07d26c4c189 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07e23d38b405aacaa966c07d26c4c189 = MAKE_FUNCTION_FRAME(tstate, codeobj_07e23d38b405aacaa966c07d26c4c189, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07e23d38b405aacaa966c07d26c4c189->m_type_description == NULL);
    frame_07e23d38b405aacaa966c07d26c4c189 = cache_frame_07e23d38b405aacaa966c07d26c4c189;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_07e23d38b405aacaa966c07d26c4c189);
    assert(Py_REFCNT(frame_07e23d38b405aacaa966c07d26c4c189) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_07e23d38b405aacaa966c07d26c4c189->m_frame.f_lineno = 1449;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1449;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07e23d38b405aacaa966c07d26c4c189, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07e23d38b405aacaa966c07d26c4c189->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07e23d38b405aacaa966c07d26c4c189, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07e23d38b405aacaa966c07d26c4c189,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_07e23d38b405aacaa966c07d26c4c189 == cache_frame_07e23d38b405aacaa966c07d26c4c189) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07e23d38b405aacaa966c07d26c4c189);
        cache_frame_07e23d38b405aacaa966c07d26c4c189 = NULL;
    }

    assertFrameObject(frame_07e23d38b405aacaa966c07d26c4c189);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__63_handle_dbapi_exception(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_3f559392147b1aac376708058d8fa36a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f559392147b1aac376708058d8fa36a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f559392147b1aac376708058d8fa36a)) {
        Py_XDECREF(cache_frame_3f559392147b1aac376708058d8fa36a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f559392147b1aac376708058d8fa36a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f559392147b1aac376708058d8fa36a = MAKE_FUNCTION_FRAME(tstate, codeobj_3f559392147b1aac376708058d8fa36a, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f559392147b1aac376708058d8fa36a->m_type_description == NULL);
    frame_3f559392147b1aac376708058d8fa36a = cache_frame_3f559392147b1aac376708058d8fa36a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3f559392147b1aac376708058d8fa36a);
    assert(Py_REFCNT(frame_3f559392147b1aac376708058d8fa36a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_3f559392147b1aac376708058d8fa36a->m_frame.f_lineno = 1455;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1455;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f559392147b1aac376708058d8fa36a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f559392147b1aac376708058d8fa36a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f559392147b1aac376708058d8fa36a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f559392147b1aac376708058d8fa36a,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_3f559392147b1aac376708058d8fa36a == cache_frame_3f559392147b1aac376708058d8fa36a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f559392147b1aac376708058d8fa36a);
        cache_frame_3f559392147b1aac376708058d8fa36a = NULL;
    }

    assertFrameObject(frame_3f559392147b1aac376708058d8fa36a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__64_should_autocommit_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_statement = python_pars[1];
    struct Nuitka_FrameObject *frame_faecf29e0c8875c8a7e24e08b1651462;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_faecf29e0c8875c8a7e24e08b1651462 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_faecf29e0c8875c8a7e24e08b1651462)) {
        Py_XDECREF(cache_frame_faecf29e0c8875c8a7e24e08b1651462);

#if _DEBUG_REFCOUNTS
        if (cache_frame_faecf29e0c8875c8a7e24e08b1651462 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_faecf29e0c8875c8a7e24e08b1651462 = MAKE_FUNCTION_FRAME(tstate, codeobj_faecf29e0c8875c8a7e24e08b1651462, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_faecf29e0c8875c8a7e24e08b1651462->m_type_description == NULL);
    frame_faecf29e0c8875c8a7e24e08b1651462 = cache_frame_faecf29e0c8875c8a7e24e08b1651462;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_faecf29e0c8875c8a7e24e08b1651462);
    assert(Py_REFCNT(frame_faecf29e0c8875c8a7e24e08b1651462) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_faecf29e0c8875c8a7e24e08b1651462->m_frame.f_lineno = 1461;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1461;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_faecf29e0c8875c8a7e24e08b1651462, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_faecf29e0c8875c8a7e24e08b1651462->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_faecf29e0c8875c8a7e24e08b1651462, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_faecf29e0c8875c8a7e24e08b1651462,
        type_description_1,
        par_self,
        par_statement
    );


    // Release cached frame if used for exception.
    if (frame_faecf29e0c8875c8a7e24e08b1651462 == cache_frame_faecf29e0c8875c8a7e24e08b1651462) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_faecf29e0c8875c8a7e24e08b1651462);
        cache_frame_faecf29e0c8875c8a7e24e08b1651462 = NULL;
    }

    assertFrameObject(frame_faecf29e0c8875c8a7e24e08b1651462);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__65_lastrow_has_defaults(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_db774f0d1eed27255690397d0d29a13c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db774f0d1eed27255690397d0d29a13c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db774f0d1eed27255690397d0d29a13c)) {
        Py_XDECREF(cache_frame_db774f0d1eed27255690397d0d29a13c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db774f0d1eed27255690397d0d29a13c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db774f0d1eed27255690397d0d29a13c = MAKE_FUNCTION_FRAME(tstate, codeobj_db774f0d1eed27255690397d0d29a13c, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db774f0d1eed27255690397d0d29a13c->m_type_description == NULL);
    frame_db774f0d1eed27255690397d0d29a13c = cache_frame_db774f0d1eed27255690397d0d29a13c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_db774f0d1eed27255690397d0d29a13c);
    assert(Py_REFCNT(frame_db774f0d1eed27255690397d0d29a13c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_db774f0d1eed27255690397d0d29a13c->m_frame.f_lineno = 1468;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1468;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db774f0d1eed27255690397d0d29a13c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db774f0d1eed27255690397d0d29a13c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db774f0d1eed27255690397d0d29a13c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db774f0d1eed27255690397d0d29a13c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_db774f0d1eed27255690397d0d29a13c == cache_frame_db774f0d1eed27255690397d0d29a13c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db774f0d1eed27255690397d0d29a13c);
        cache_frame_db774f0d1eed27255690397d0d29a13c = NULL;
    }

    assertFrameObject(frame_db774f0d1eed27255690397d0d29a13c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__66_get_rowcount(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d0ea16b32de419a9b2b51324ada376d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0ea16b32de419a9b2b51324ada376d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0ea16b32de419a9b2b51324ada376d2)) {
        Py_XDECREF(cache_frame_d0ea16b32de419a9b2b51324ada376d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0ea16b32de419a9b2b51324ada376d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0ea16b32de419a9b2b51324ada376d2 = MAKE_FUNCTION_FRAME(tstate, codeobj_d0ea16b32de419a9b2b51324ada376d2, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0ea16b32de419a9b2b51324ada376d2->m_type_description == NULL);
    frame_d0ea16b32de419a9b2b51324ada376d2 = cache_frame_d0ea16b32de419a9b2b51324ada376d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d0ea16b32de419a9b2b51324ada376d2);
    assert(Py_REFCNT(frame_d0ea16b32de419a9b2b51324ada376d2) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d0ea16b32de419a9b2b51324ada376d2->m_frame.f_lineno = 1478;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1478;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0ea16b32de419a9b2b51324ada376d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0ea16b32de419a9b2b51324ada376d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0ea16b32de419a9b2b51324ada376d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0ea16b32de419a9b2b51324ada376d2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d0ea16b32de419a9b2b51324ada376d2 == cache_frame_d0ea16b32de419a9b2b51324ada376d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0ea16b32de419a9b2b51324ada376d2);
        cache_frame_d0ea16b32de419a9b2b51324ada376d2 = NULL;
    }

    assertFrameObject(frame_d0ea16b32de419a9b2b51324ada376d2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__68_execute(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_object_ = python_pars[1];
    PyObject *par_multiparams = python_pars[2];
    PyObject *par_params = python_pars[3];
    struct Nuitka_FrameObject *frame_533f01935f05cac21a12f9af35871bdc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_533f01935f05cac21a12f9af35871bdc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_533f01935f05cac21a12f9af35871bdc)) {
        Py_XDECREF(cache_frame_533f01935f05cac21a12f9af35871bdc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_533f01935f05cac21a12f9af35871bdc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_533f01935f05cac21a12f9af35871bdc = MAKE_FUNCTION_FRAME(tstate, codeobj_533f01935f05cac21a12f9af35871bdc, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_533f01935f05cac21a12f9af35871bdc->m_type_description == NULL);
    frame_533f01935f05cac21a12f9af35871bdc = cache_frame_533f01935f05cac21a12f9af35871bdc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_533f01935f05cac21a12f9af35871bdc);
    assert(Py_REFCNT(frame_533f01935f05cac21a12f9af35871bdc) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_533f01935f05cac21a12f9af35871bdc->m_frame.f_lineno = 1524;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1524;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_533f01935f05cac21a12f9af35871bdc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_533f01935f05cac21a12f9af35871bdc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_533f01935f05cac21a12f9af35871bdc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_533f01935f05cac21a12f9af35871bdc,
        type_description_1,
        par_self,
        par_object_,
        par_multiparams,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_533f01935f05cac21a12f9af35871bdc == cache_frame_533f01935f05cac21a12f9af35871bdc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_533f01935f05cac21a12f9af35871bdc);
        cache_frame_533f01935f05cac21a12f9af35871bdc = NULL;
    }

    assertFrameObject(frame_533f01935f05cac21a12f9af35871bdc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_object_);
    Py_DECREF(par_object_);
    CHECK_OBJECT(par_multiparams);
    Py_DECREF(par_multiparams);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__69_scalar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_object_ = python_pars[1];
    PyObject *par_multiparams = python_pars[2];
    PyObject *par_params = python_pars[3];
    struct Nuitka_FrameObject *frame_cda0cbfb0f52f9c9a340024116ba60a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cda0cbfb0f52f9c9a340024116ba60a8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cda0cbfb0f52f9c9a340024116ba60a8)) {
        Py_XDECREF(cache_frame_cda0cbfb0f52f9c9a340024116ba60a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cda0cbfb0f52f9c9a340024116ba60a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cda0cbfb0f52f9c9a340024116ba60a8 = MAKE_FUNCTION_FRAME(tstate, codeobj_cda0cbfb0f52f9c9a340024116ba60a8, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cda0cbfb0f52f9c9a340024116ba60a8->m_type_description == NULL);
    frame_cda0cbfb0f52f9c9a340024116ba60a8 = cache_frame_cda0cbfb0f52f9c9a340024116ba60a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cda0cbfb0f52f9c9a340024116ba60a8);
    assert(Py_REFCNT(frame_cda0cbfb0f52f9c9a340024116ba60a8) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_cda0cbfb0f52f9c9a340024116ba60a8->m_frame.f_lineno = 1531;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1531;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cda0cbfb0f52f9c9a340024116ba60a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cda0cbfb0f52f9c9a340024116ba60a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cda0cbfb0f52f9c9a340024116ba60a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cda0cbfb0f52f9c9a340024116ba60a8,
        type_description_1,
        par_self,
        par_object_,
        par_multiparams,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_cda0cbfb0f52f9c9a340024116ba60a8 == cache_frame_cda0cbfb0f52f9c9a340024116ba60a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cda0cbfb0f52f9c9a340024116ba60a8);
        cache_frame_cda0cbfb0f52f9c9a340024116ba60a8 = NULL;
    }

    assertFrameObject(frame_cda0cbfb0f52f9c9a340024116ba60a8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_object_);
    Py_DECREF(par_object_);
    CHECK_OBJECT(par_multiparams);
    Py_DECREF(par_multiparams);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__70__run_visitor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_visitorcallable = python_pars[1];
    PyObject *par_element = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_d4494f9301a3087266b78a0b5d973cfa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d4494f9301a3087266b78a0b5d973cfa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d4494f9301a3087266b78a0b5d973cfa)) {
        Py_XDECREF(cache_frame_d4494f9301a3087266b78a0b5d973cfa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4494f9301a3087266b78a0b5d973cfa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4494f9301a3087266b78a0b5d973cfa = MAKE_FUNCTION_FRAME(tstate, codeobj_d4494f9301a3087266b78a0b5d973cfa, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d4494f9301a3087266b78a0b5d973cfa->m_type_description == NULL);
    frame_d4494f9301a3087266b78a0b5d973cfa = cache_frame_d4494f9301a3087266b78a0b5d973cfa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d4494f9301a3087266b78a0b5d973cfa);
    assert(Py_REFCNT(frame_d4494f9301a3087266b78a0b5d973cfa) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d4494f9301a3087266b78a0b5d973cfa->m_frame.f_lineno = 1534;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1534;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4494f9301a3087266b78a0b5d973cfa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4494f9301a3087266b78a0b5d973cfa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4494f9301a3087266b78a0b5d973cfa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4494f9301a3087266b78a0b5d973cfa,
        type_description_1,
        par_self,
        par_visitorcallable,
        par_element,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_d4494f9301a3087266b78a0b5d973cfa == cache_frame_d4494f9301a3087266b78a0b5d973cfa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d4494f9301a3087266b78a0b5d973cfa);
        cache_frame_d4494f9301a3087266b78a0b5d973cfa = NULL;
    }

    assertFrameObject(frame_d4494f9301a3087266b78a0b5d973cfa);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_visitorcallable);
    Py_DECREF(par_visitorcallable);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__71__execute_clauseelement(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_elem = python_pars[1];
    PyObject *par_multiparams = python_pars[2];
    PyObject *par_params = python_pars[3];
    struct Nuitka_FrameObject *frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5)) {
        Py_XDECREF(cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5 = MAKE_FUNCTION_FRAME(tstate, codeobj_d1e9ee27fdb143cf0e6c86b8aeb1fee5, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5->m_type_description == NULL);
    frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5 = cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5);
    assert(Py_REFCNT(frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5->m_frame.f_lineno = 1537;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1537;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5,
        type_description_1,
        par_self,
        par_elem,
        par_multiparams,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5 == cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5);
        cache_frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5 = NULL;
    }

    assertFrameObject(frame_d1e9ee27fdb143cf0e6c86b8aeb1fee5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_multiparams);
    Py_DECREF(par_multiparams);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__72_driver_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8b4367257e0f6ac40df30c81ee72c82c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b4367257e0f6ac40df30c81ee72c82c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b4367257e0f6ac40df30c81ee72c82c)) {
        Py_XDECREF(cache_frame_8b4367257e0f6ac40df30c81ee72c82c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b4367257e0f6ac40df30c81ee72c82c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b4367257e0f6ac40df30c81ee72c82c = MAKE_FUNCTION_FRAME(tstate, codeobj_8b4367257e0f6ac40df30c81ee72c82c, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b4367257e0f6ac40df30c81ee72c82c->m_type_description == NULL);
    frame_8b4367257e0f6ac40df30c81ee72c82c = cache_frame_8b4367257e0f6ac40df30c81ee72c82c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8b4367257e0f6ac40df30c81ee72c82c);
    assert(Py_REFCNT(frame_8b4367257e0f6ac40df30c81ee72c82c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1704;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b4367257e0f6ac40df30c81ee72c82c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b4367257e0f6ac40df30c81ee72c82c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b4367257e0f6ac40df30c81ee72c82c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b4367257e0f6ac40df30c81ee72c82c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8b4367257e0f6ac40df30c81ee72c82c == cache_frame_8b4367257e0f6ac40df30c81ee72c82c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b4367257e0f6ac40df30c81ee72c82c);
        cache_frame_8b4367257e0f6ac40df30c81ee72c82c = NULL;
    }

    assertFrameObject(frame_8b4367257e0f6ac40df30c81ee72c82c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__73_run_async(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fn = python_pars[1];
    struct Nuitka_FrameObject *frame_d9f5cb871f582c89ef1459a7b09f33bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9f5cb871f582c89ef1459a7b09f33bd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d9f5cb871f582c89ef1459a7b09f33bd)) {
        Py_XDECREF(cache_frame_d9f5cb871f582c89ef1459a7b09f33bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9f5cb871f582c89ef1459a7b09f33bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9f5cb871f582c89ef1459a7b09f33bd = MAKE_FUNCTION_FRAME(tstate, codeobj_d9f5cb871f582c89ef1459a7b09f33bd, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9f5cb871f582c89ef1459a7b09f33bd->m_type_description == NULL);
    frame_d9f5cb871f582c89ef1459a7b09f33bd = cache_frame_d9f5cb871f582c89ef1459a7b09f33bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d9f5cb871f582c89ef1459a7b09f33bd);
    assert(Py_REFCNT(frame_d9f5cb871f582c89ef1459a7b09f33bd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1733;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fn);
        tmp_called_value_2 = par_fn;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1733;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d9f5cb871f582c89ef1459a7b09f33bd->m_frame.f_lineno = 1733;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1733;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d9f5cb871f582c89ef1459a7b09f33bd->m_frame.f_lineno = 1733;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1733;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9f5cb871f582c89ef1459a7b09f33bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9f5cb871f582c89ef1459a7b09f33bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9f5cb871f582c89ef1459a7b09f33bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9f5cb871f582c89ef1459a7b09f33bd,
        type_description_1,
        par_self,
        par_fn
    );


    // Release cached frame if used for exception.
    if (frame_d9f5cb871f582c89ef1459a7b09f33bd == cache_frame_d9f5cb871f582c89ef1459a7b09f33bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9f5cb871f582c89ef1459a7b09f33bd);
        cache_frame_d9f5cb871f582c89ef1459a7b09f33bd = NULL;
    }

    assertFrameObject(frame_d9f5cb871f582c89ef1459a7b09f33bd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__74___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4b0fd5d7b43c198e45f5dd338c7bcb08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08)) {
        Py_XDECREF(cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08 = MAKE_FUNCTION_FRAME(tstate, codeobj_4b0fd5d7b43c198e45f5dd338c7bcb08, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08->m_type_description == NULL);
    frame_4b0fd5d7b43c198e45f5dd338c7bcb08 = cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4b0fd5d7b43c198e45f5dd338c7bcb08);
    assert(Py_REFCNT(frame_4b0fd5d7b43c198e45f5dd338c7bcb08) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_mod_expr_left_1 = mod_consts[65];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1736;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1736;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4b0fd5d7b43c198e45f5dd338c7bcb08, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b0fd5d7b43c198e45f5dd338c7bcb08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b0fd5d7b43c198e45f5dd338c7bcb08, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b0fd5d7b43c198e45f5dd338c7bcb08,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4b0fd5d7b43c198e45f5dd338c7bcb08 == cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08);
        cache_frame_4b0fd5d7b43c198e45f5dd338c7bcb08 = NULL;
    }

    assertFrameObject(frame_4b0fd5d7b43c198e45f5dd338c7bcb08);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__10_get_sequence_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__10_get_sequence_names,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_3630446a3f8ce7770ae9d3675a30cad3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__11_get_temp_view_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__11_get_temp_view_names,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_797641734884413f92b13eb2f3c268e4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__12_get_view_definition(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__12_get_view_definition,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_7ae036da39087620cdbf528a1a9934ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__13_get_indexes(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__13_get_indexes,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_dcdbbc0eb7607c57d337b385df707b5f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__14_get_unique_constraints(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__14_get_unique_constraints,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_9f96b0c125df626e94b8f2fb8aeb2e49,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__15_get_check_constraints(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__15_get_check_constraints,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_5e318938f36504f558c5d6e44101e9ce,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__16_get_table_comment(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__16_get_table_comment,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_4959f50a2f33e5c97b2ccf9b2de9437d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__17_normalize_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__17_normalize_name,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_be671536aca9dbf897a20ba782b5adb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__18_denormalize_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__18_denormalize_name,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_1ab3cd55d56c70090f637923d7a67808,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__19_has_table(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__19_has_table,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_181ea63555b19de5ae44cd886887233e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__1_create_connect_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__1_create_connect_args,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_474c03c83a1a020448e46a9a6c4b8928,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__20_has_index(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__20_has_index,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_c0e1bec1ac978d2ac3f4b25347fa9997,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__21_has_sequence(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__21_has_sequence,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_5dea653d63f9f1c98c2a1a33c56d8f4c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_e93973ed29b84bbcc2e3d12f3d086de1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_9ab830e43cfb69b3ac8200abe9cd8b1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__24_do_begin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__24_do_begin,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_80473fc57a7d4a378e8aa083187e0c6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__25_do_rollback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__25_do_rollback,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_0b0f4064a77880c2b506363fc3546d00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__26_do_commit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__26_do_commit,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_ae09f2574b7af74f5868a89212fd5279,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__27_do_terminate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__27_do_terminate,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_9526f2870dd6530b108adf0a08aa8a08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__28_do_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__28_do_close,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_284f0a540dc90f535a4d0314cd045499,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__29_do_set_input_sizes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__29_do_set_input_sizes,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_2cd16af480bb579cc1d09f05f5d04e3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__2_type_descriptor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__2_type_descriptor,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_772192b5c1fb8397abc5ecc2c9f34e3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__30_create_xid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__30_create_xid,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_f7492d48a1f0b019bb7ef3895c7f746c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__31_do_savepoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__31_do_savepoint,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_48abee30760cfc4dda96e3ec969d9444,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__32_do_rollback_to_savepoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__32_do_rollback_to_savepoint,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_775edc32dd7227360ae72391dd44d412,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__33_do_release_savepoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__33_do_release_savepoint,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_dde0d6f0043982febb8030ad96d59943,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__34_do_begin_twophase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__34_do_begin_twophase,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_d34008cf9a17762c48d835a18e11f583,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__35_do_prepare_twophase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__35_do_prepare_twophase,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_0af7543a7927b1c14046912fe8a1cb6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__36_do_rollback_twophase(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__36_do_rollback_twophase,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_eb782cabb4fdf8b137233237c69e731d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__37_do_commit_twophase(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__37_do_commit_twophase,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_e61e88b4d18f7eadd6371203f798954b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__38_do_recover_twophase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__38_do_recover_twophase,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_38fd12787c6477618e65682474efef1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__39_do_executemany(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__39_do_executemany,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_db5efa43feaa83e7c2fabd59c1e2f0df,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__3_initialize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_e7d8e81e7bd1d58f148a2ebe44e4b57c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__40_do_execute(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__40_do_execute,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_2e4f178f61b1ddcdbf8513762ff17109,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__41_do_execute_no_params(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__41_do_execute_no_params,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_389302af75d847c462031ed53c14a853,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__42_is_disconnect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__42_is_disconnect,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_a3df05b143bf9792a0f72e5fa587d2de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__43_connect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_60383555ceb88e844f7b0ef08da2df96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[186],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__44_on_connect_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__44_on_connect_url,
        mod_consts[189],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_f06bc8a915c4c7df2c09a4acf7ee308d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__45_on_connect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_a743c5a09953660c93df49542c753e28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[191],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__46_reset_isolation_level() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__46_reset_isolation_level,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_286057e84fe06cf341ec8b0c66e9e9a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__47_set_isolation_level() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__47_set_isolation_level,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_4d65c3a5ac03c76a14ab72331133bd45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__48_get_isolation_level() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__48_get_isolation_level,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_5225a6b8946df394aab3cd1af221eb97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__49_get_default_isolation_level() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__49_get_default_isolation_level,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_77ddba100b47a973ff98b6272e1b8096,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__4_get_columns(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__4_get_columns,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_4d3b6164627f3155925f04e3b78384a8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__50_get_dialect_cls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__50_get_dialect_cls,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_a983c79a189b887ac8c1680175e304a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__51_load_provisioning() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_3d4d44dc9d1a94f6b13fa68738b788b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[203],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__52_engine_created() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_23d872c793e885e780924186d3fa2013,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[206],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__53_get_driver_connection() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__53_get_driver_connection,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_00492ef224eb5971e77376cd8a1723c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__54___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__54___init__,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_fec96f2b7a73018927f2fd169e07b728,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__55_update_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[217],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_1b1ae3647a451ad6cb4ecddc910763f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[216],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__56_handle_dialect_kwargs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[220],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_ec1148e5b6be3818641b433bda46ae0d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[219],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__57_handle_pool_kwargs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_26c8b2d6509fee34a1113f7d59114176,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[222],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__58_engine_created() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_a08125cef34f7dee67652455c47c892b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[225],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__59_create_cursor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__59_create_cursor,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_b642c3031fe8deaf95e5e2da21263fae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__5_get_pk_constraint(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__5_get_pk_constraint,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_195ea1c03ffe88a417062320328b96b5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__60_pre_exec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__60_pre_exec,
        mod_consts[231],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_0f22b343563cbc1653267c94b111c05c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__61_get_out_parameter_values() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__61_get_out_parameter_values,
        mod_consts[233],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_47926f78d7d9e584e7c3432164b5e742,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__62_post_exec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__62_post_exec,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_07e23d38b405aacaa966c07d26c4c189,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__63_handle_dbapi_exception() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__63_handle_dbapi_exception,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_3f559392147b1aac376708058d8fa36a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__64_should_autocommit_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__64_should_autocommit_text,
        mod_consts[239],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_faecf29e0c8875c8a7e24e08b1651462,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__65_lastrow_has_defaults() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__65_lastrow_has_defaults,
        mod_consts[241],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_db774f0d1eed27255690397d0d29a13c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__66_get_rowcount() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__66_get_rowcount,
        mod_consts[243],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_d0ea16b32de419a9b2b51324ada376d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__67_connect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_afd78a3119f53cf41b8345da1a7aa537,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[250],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__68_execute() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__68_execute,
        mod_consts[253],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_533f01935f05cac21a12f9af35871bdc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__69_scalar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__69_scalar,
        mod_consts[255],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_cda0cbfb0f52f9c9a340024116ba60a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__6_get_foreign_keys(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__6_get_foreign_keys,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_9fdba8af52b97b9ad3cf11bc10708e52,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__70__run_visitor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__70__run_visitor,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_d4494f9301a3087266b78a0b5d973cfa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__71__execute_clauseelement(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__71__execute_clauseelement,
        mod_consts[260],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_d1e9ee27fdb143cf0e6c86b8aeb1fee5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__72_driver_connection() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__72_driver_connection,
        mod_consts[278],
#if PYTHON_VERSION >= 0x300
        mod_consts[279],
#endif
        codeobj_8b4367257e0f6ac40df30c81ee72c82c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__73_run_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__73_run_async,
        mod_consts[280],
#if PYTHON_VERSION >= 0x300
        mod_consts[281],
#endif
        codeobj_d9f5cb871f582c89ef1459a7b09f33bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__74___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__74___repr__,
        mod_consts[282],
#if PYTHON_VERSION >= 0x300
        mod_consts[283],
#endif
        codeobj_4b0fd5d7b43c198e45f5dd338c7bcb08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__7_get_table_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__7_get_table_names,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_12a571fbcb12a2a8b9cba57197d7007d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__8_get_temp_table_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__8_get_temp_table_names,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_aa5a5e09934bee942ec03afa07e4acb1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__9_get_view_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__9_get_view_names,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_e6fe1ed3cc28b0597326ec1e79d815b7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_sqlalchemy$engine$interfaces[] = {
    impl_sqlalchemy$engine$interfaces$$$function__1_create_connect_args,
    impl_sqlalchemy$engine$interfaces$$$function__2_type_descriptor,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__4_get_columns,
    impl_sqlalchemy$engine$interfaces$$$function__5_get_pk_constraint,
    impl_sqlalchemy$engine$interfaces$$$function__6_get_foreign_keys,
    impl_sqlalchemy$engine$interfaces$$$function__7_get_table_names,
    impl_sqlalchemy$engine$interfaces$$$function__8_get_temp_table_names,
    impl_sqlalchemy$engine$interfaces$$$function__9_get_view_names,
    impl_sqlalchemy$engine$interfaces$$$function__10_get_sequence_names,
    impl_sqlalchemy$engine$interfaces$$$function__11_get_temp_view_names,
    impl_sqlalchemy$engine$interfaces$$$function__12_get_view_definition,
    impl_sqlalchemy$engine$interfaces$$$function__13_get_indexes,
    impl_sqlalchemy$engine$interfaces$$$function__14_get_unique_constraints,
    impl_sqlalchemy$engine$interfaces$$$function__15_get_check_constraints,
    impl_sqlalchemy$engine$interfaces$$$function__16_get_table_comment,
    impl_sqlalchemy$engine$interfaces$$$function__17_normalize_name,
    impl_sqlalchemy$engine$interfaces$$$function__18_denormalize_name,
    impl_sqlalchemy$engine$interfaces$$$function__19_has_table,
    impl_sqlalchemy$engine$interfaces$$$function__20_has_index,
    impl_sqlalchemy$engine$interfaces$$$function__21_has_sequence,
    impl_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info,
    impl_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name,
    impl_sqlalchemy$engine$interfaces$$$function__24_do_begin,
    impl_sqlalchemy$engine$interfaces$$$function__25_do_rollback,
    impl_sqlalchemy$engine$interfaces$$$function__26_do_commit,
    impl_sqlalchemy$engine$interfaces$$$function__27_do_terminate,
    impl_sqlalchemy$engine$interfaces$$$function__28_do_close,
    impl_sqlalchemy$engine$interfaces$$$function__29_do_set_input_sizes,
    impl_sqlalchemy$engine$interfaces$$$function__30_create_xid,
    impl_sqlalchemy$engine$interfaces$$$function__31_do_savepoint,
    impl_sqlalchemy$engine$interfaces$$$function__32_do_rollback_to_savepoint,
    impl_sqlalchemy$engine$interfaces$$$function__33_do_release_savepoint,
    impl_sqlalchemy$engine$interfaces$$$function__34_do_begin_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__35_do_prepare_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__36_do_rollback_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__37_do_commit_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__38_do_recover_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__39_do_executemany,
    impl_sqlalchemy$engine$interfaces$$$function__40_do_execute,
    impl_sqlalchemy$engine$interfaces$$$function__41_do_execute_no_params,
    impl_sqlalchemy$engine$interfaces$$$function__42_is_disconnect,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__44_on_connect_url,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__46_reset_isolation_level,
    impl_sqlalchemy$engine$interfaces$$$function__47_set_isolation_level,
    impl_sqlalchemy$engine$interfaces$$$function__48_get_isolation_level,
    impl_sqlalchemy$engine$interfaces$$$function__49_get_default_isolation_level,
    impl_sqlalchemy$engine$interfaces$$$function__50_get_dialect_cls,
    NULL,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__53_get_driver_connection,
    impl_sqlalchemy$engine$interfaces$$$function__54___init__,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__59_create_cursor,
    impl_sqlalchemy$engine$interfaces$$$function__60_pre_exec,
    impl_sqlalchemy$engine$interfaces$$$function__61_get_out_parameter_values,
    impl_sqlalchemy$engine$interfaces$$$function__62_post_exec,
    impl_sqlalchemy$engine$interfaces$$$function__63_handle_dbapi_exception,
    impl_sqlalchemy$engine$interfaces$$$function__64_should_autocommit_text,
    impl_sqlalchemy$engine$interfaces$$$function__65_lastrow_has_defaults,
    impl_sqlalchemy$engine$interfaces$$$function__66_get_rowcount,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__68_execute,
    impl_sqlalchemy$engine$interfaces$$$function__69_scalar,
    impl_sqlalchemy$engine$interfaces$$$function__70__run_visitor,
    impl_sqlalchemy$engine$interfaces$$$function__71__execute_clauseelement,
    impl_sqlalchemy$engine$interfaces$$$function__72_driver_connection,
    impl_sqlalchemy$engine$interfaces$$$function__73_run_async,
    impl_sqlalchemy$engine$interfaces$$$function__74___repr__,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_sqlalchemy$engine$interfaces;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_sqlalchemy$engine$interfaces) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_sqlalchemy$engine$interfaces[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_sqlalchemy$engine$interfaces,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_sqlalchemy$engine$interfaces(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.engine.interfaces");

    // Store the module for future use.
    module_sqlalchemy$engine$interfaces = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.engine.interfaces: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlalchemy.engine.interfaces: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$engine$interfaces\n");

    moduledict_sqlalchemy$engine$interfaces = MODULE_DICT(module_sqlalchemy$engine$interfaces);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$engine$interfaces,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$engine$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[73]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$engine$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$engine$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$engine$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$engine$interfaces);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlalchemy$engine$interfaces);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    struct Nuitka_FrameObject *frame_e6a93aebff3e6588bbc71af05df38390;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_fabf5bc52509ff28ce568eabd07d9b4d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094 = NULL;
    struct Nuitka_FrameObject *frame_361ef0622530fddbe23d689efff5e9be_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328 = NULL;
    struct Nuitka_FrameObject *frame_e9d599bd9606c3291add3d76fcb8c29c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491 = NULL;
    struct Nuitka_FrameObject *frame_6a6ef5e44a38e02d2c31eabf706152b5_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540 = NULL;
    struct Nuitka_FrameObject *frame_a887ee37c876b13270b147f21c84a03a_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689 = NULL;
    struct Nuitka_FrameObject *frame_d481466a7c8f3b629a3770b8706016a3_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_2);
    }
    frame_e6a93aebff3e6588bbc71af05df38390 = MAKE_MODULE_FRAME(codeobj_e6a93aebff3e6588bbc71af05df38390, module_sqlalchemy$engine$interfaces);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e6a93aebff3e6588bbc71af05df38390);
    assert(Py_REFCNT(frame_e6a93aebff3e6588bbc71af05df38390) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[70], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[71], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[73];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$engine$interfaces;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[74];
        tmp_level_value_1 = mod_consts[75];
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$engine$interfaces,
                mod_consts[76],
                mod_consts[77]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[78];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$engine$interfaces;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[79];
        tmp_level_value_2 = mod_consts[75];
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$engine$interfaces,
                mod_consts[80],
                mod_consts[77]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[78];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$engine$interfaces;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[81];
        tmp_level_value_3 = mod_consts[75];
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 12;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$engine$interfaces,
                mod_consts[82],
                mod_consts[77]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[83];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$engine$interfaces;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[84];
        tmp_level_value_4 = mod_consts[75];
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 13;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$engine$interfaces,
                mod_consts[63],
                mod_consts[77]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_7);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[85];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[77];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[86]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[87];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 16;
        tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[88]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_5 = mod_consts[90];
        tmp_default_value_1 = mod_consts[91];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_5, tmp_default_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[90]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 16;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        frame_fabf5bc52509ff28ce568eabd07d9b4d_2 = MAKE_CLASS_FRAME(tstate, codeobj_fabf5bc52509ff28ce568eabd07d9b4d, module_sqlalchemy$engine$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_fabf5bc52509ff28ce568eabd07d9b4d_2);
        assert(Py_REFCNT(frame_fabf5bc52509ff28ce568eabd07d9b4d_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__1_create_connect_args();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[98], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[100]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[100]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[100]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__2_type_descriptor();

            frame_fabf5bc52509ff28ce568eabd07d9b4d_2->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__2_type_descriptor();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__3_initialize();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[106];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__4_get_columns(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[106];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__5_get_pk_constraint(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[106];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__6_get_foreign_keys(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[106];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__7_get_table_names(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[106];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__8_get_temp_table_names(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[106];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__9_get_view_names(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[117], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[106];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__10_get_sequence_names(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[106];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__11_get_temp_view_names(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[106];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__12_get_view_definition(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = mod_consts[106];
            Py_INCREF(tmp_defaults_10);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__13_get_indexes(tmp_defaults_10);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_11;
            tmp_defaults_11 = mod_consts[106];
            Py_INCREF(tmp_defaults_11);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__14_get_unique_constraints(tmp_defaults_11);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_12;
            tmp_defaults_12 = mod_consts[106];
            Py_INCREF(tmp_defaults_12);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__15_get_check_constraints(tmp_defaults_12);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_13;
            tmp_defaults_13 = mod_consts[106];
            Py_INCREF(tmp_defaults_13);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__16_get_table_comment(tmp_defaults_13);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__17_normalize_name();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[133], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__18_denormalize_name();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[135], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_14;
            tmp_defaults_14 = mod_consts[106];
            Py_INCREF(tmp_defaults_14);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__19_has_table(tmp_defaults_14);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_15;
            tmp_defaults_15 = mod_consts[106];
            Py_INCREF(tmp_defaults_15);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__20_has_index(tmp_defaults_15);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[139], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_16;
            tmp_defaults_16 = mod_consts[106];
            Py_INCREF(tmp_defaults_16);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__21_has_sequence(tmp_defaults_16);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[143], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[145], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__24_do_begin();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[147], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__25_do_rollback();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__26_do_commit();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[151], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__27_do_terminate();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[153], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__28_do_close();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[155], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__29_do_set_input_sizes();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__30_create_xid();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__31_do_savepoint();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[161], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__32_do_rollback_to_savepoint();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[163], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__33_do_release_savepoint();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[165], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__34_do_begin_twophase();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[167], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__35_do_prepare_twophase();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[169], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_17;
            tmp_defaults_17 = mod_consts[171];
            Py_INCREF(tmp_defaults_17);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__36_do_rollback_twophase(tmp_defaults_17);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_18;
            tmp_defaults_18 = mod_consts[171];
            Py_INCREF(tmp_defaults_18);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__37_do_commit_twophase(tmp_defaults_18);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[174], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 705;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__38_do_recover_twophase();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_19;
            tmp_defaults_19 = mod_consts[106];
            Py_INCREF(tmp_defaults_19);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__39_do_executemany(tmp_defaults_19);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 731;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_20;
            tmp_defaults_20 = mod_consts[106];
            Py_INCREF(tmp_defaults_20);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__40_do_execute(tmp_defaults_20);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 737;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_21;
            tmp_defaults_21 = mod_consts[106];
            Py_INCREF(tmp_defaults_21);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__41_do_execute_no_params(tmp_defaults_21);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[182], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 743;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__42_is_disconnect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[184], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__43_connect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[187], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__44_on_connect_url();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[189], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 793;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__45_on_connect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__46_reset_isolation_level();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[193], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 907;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__47_set_isolation_level();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[195], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 934;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__48_get_isolation_level();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[197], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 961;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__49_get_default_isolation_level();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[199], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 994;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_classmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[100]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1014;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_3 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[100]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[100]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 1014;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1014;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__50_get_dialect_cls();

            frame_fabf5bc52509ff28ce568eabd07d9b4d_2->m_frame.f_lineno = 1014;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1014;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__50_get_dialect_cls();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[201], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1015;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_classmethod_arg_3;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[100]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1030;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_4 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[100]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[100]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 1030;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1030;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__51_load_provisioning();

            frame_fabf5bc52509ff28ce568eabd07d9b4d_2->m_frame.f_lineno = 1030;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1030;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;


            tmp_classmethod_arg_3 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__51_load_provisioning();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[204], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1031;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_classmethod_arg_4;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[100]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1059;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_5 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[100]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[100]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 1059;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1059;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__52_engine_created();

            frame_fabf5bc52509ff28ce568eabd07d9b4d_2->m_frame.f_lineno = 1059;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1059;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;


            tmp_classmethod_arg_4 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__52_engine_created();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[207], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1060;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__53_get_driver_connection();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[209], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1078;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fabf5bc52509ff28ce568eabd07d9b4d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fabf5bc52509ff28ce568eabd07d9b4d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fabf5bc52509ff28ce568eabd07d9b4d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fabf5bc52509ff28ce568eabd07d9b4d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_fabf5bc52509ff28ce568eabd07d9b4d_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[85];
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16, mod_consts[211], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[87];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 16;
            tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16);
        locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16);
        locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_16 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 16;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_13);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[85];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_15 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[77];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[86]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        tmp_tuple_element_4 = mod_consts[212];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1094;
        tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[88]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_6 = mod_consts[90];
        tmp_default_value_2 = mod_consts[91];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_6, tmp_default_value_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[90]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1094;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 1094;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_19;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[213];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[212];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_6;
        }
        frame_361ef0622530fddbe23d689efff5e9be_3 = MAKE_CLASS_FRAME(tstate, codeobj_361ef0622530fddbe23d689efff5e9be, module_sqlalchemy$engine$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_361ef0622530fddbe23d689efff5e9be_3);
        assert(Py_REFCNT(frame_361ef0622530fddbe23d689efff5e9be_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__54___init__();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1269;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__55_update_url();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[217], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1296;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__56_handle_dialect_kwargs();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[220], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1312;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__57_handle_pool_kwargs();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[223], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1315;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__58_engine_created();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[207], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1318;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_361ef0622530fddbe23d689efff5e9be_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_361ef0622530fddbe23d689efff5e9be_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_361ef0622530fddbe23d689efff5e9be_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_361ef0622530fddbe23d689efff5e9be_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_361ef0622530fddbe23d689efff5e9be_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_2 = mod_consts[85];
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1094;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094, mod_consts[211], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1094;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[212];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1094;
            tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1094;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_20 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094);
        locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094);
        locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_1094 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 1094;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_20);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = mod_consts[85];
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[77];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[86]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = mod_consts[227];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1328;
        tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[88]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_name_value_7 = mod_consts[90];
        tmp_default_value_3 = mod_consts[91];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_7, tmp_default_value_3);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[90]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1328;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 1328;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_26;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[228];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[227];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_9;
        }
        frame_e9d599bd9606c3291add3d76fcb8c29c_4 = MAKE_CLASS_FRAME(tstate, codeobj_e9d599bd9606c3291add3d76fcb8c29c, module_sqlalchemy$engine$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_e9d599bd9606c3291add3d76fcb8c29c_4);
        assert(Py_REFCNT(frame_e9d599bd9606c3291add3d76fcb8c29c_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__59_create_cursor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[229], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1386;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__60_pre_exec();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[231], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1397;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__61_get_out_parameter_values();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[233], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1407;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__62_post_exec();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[235], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1441;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__63_handle_dbapi_exception();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[237], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1451;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__64_should_autocommit_text();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[239], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1457;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__65_lastrow_has_defaults();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[241], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1463;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__66_get_rowcount();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[243], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1470;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e9d599bd9606c3291add3d76fcb8c29c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e9d599bd9606c3291add3d76fcb8c29c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e9d599bd9606c3291add3d76fcb8c29c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e9d599bd9606c3291add3d76fcb8c29c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_e9d599bd9606c3291add3d76fcb8c29c_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            tmp_cmp_expr_right_3 = mod_consts[85];
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1328;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328, mod_consts[211], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_10 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[227];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1328;
            tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1328;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_27 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328);
        locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328);
        locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1328 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 1328;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_27);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_4;
        tmp_dircall_arg1_4 = mod_consts[85];
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_29 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        tmp_condition_result_17 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_19 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[77];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_20 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[86]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        tmp_tuple_element_10 = mod_consts[245];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_10 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1491;
        tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_22 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[88]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_23 = tmp_class_creation_4__metaclass;
        tmp_name_value_8 = mod_consts[90];
        tmp_default_value_4 = mod_consts[91];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_8, tmp_default_value_4);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[90]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1491;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 1491;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_33;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto try_except_handler_10;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[246]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto try_except_handler_10;
        }
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1481;
        tmp_called_value_12 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[247], 0), mod_consts[248]);
        Py_DECREF(tmp_called_value_13);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto try_except_handler_10;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[249];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[245];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_12;
        }
        frame_6a6ef5e44a38e02d2c31eabf706152b5_5 = MAKE_CLASS_FRAME(tstate, codeobj_6a6ef5e44a38e02d2c31eabf706152b5, module_sqlalchemy$engine$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6a6ef5e44a38e02d2c31eabf706152b5_5);
        assert(Py_REFCNT(frame_6a6ef5e44a38e02d2c31eabf706152b5_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__67_connect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[187], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1502;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[252], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1512;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__68_execute();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[253], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__69_scalar();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[255], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1526;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__70__run_visitor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[257], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1533;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_defaults_22;
            tmp_defaults_22 = mod_consts[259];
            Py_INCREF(tmp_defaults_22);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__71__execute_clauseelement(tmp_defaults_22);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[260], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1536;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6a6ef5e44a38e02d2c31eabf706152b5_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6a6ef5e44a38e02d2c31eabf706152b5_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6a6ef5e44a38e02d2c31eabf706152b5_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6a6ef5e44a38e02d2c31eabf706152b5_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_6a6ef5e44a38e02d2c31eabf706152b5_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            tmp_cmp_expr_right_4 = mod_consts[85];
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1491;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491, mod_consts[211], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_14 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_12 = mod_consts[245];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1491;
            tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1491;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_args_element_value_5 = outline_3_var___class__;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491);
        locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491);
        locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1491 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 1491;
        goto try_except_handler_10;
        outline_result_4:;
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1481;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_34);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_5;
        tmp_dircall_arg1_5 = mod_consts[85];
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_36 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        tmp_condition_result_21 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_26 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[77];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_27 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_28 = tmp_class_creation_5__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[86]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        tmp_tuple_element_13 = mod_consts[262];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_13 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1540;
        tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_29 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts[88]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_30 = tmp_class_creation_5__metaclass;
        tmp_name_value_9 = mod_consts[90];
        tmp_default_value_5 = mod_consts[91];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_9, tmp_default_value_5);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_31 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[90]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1540;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 1540;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_40;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[263];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[262];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_15;
        }
        frame_a887ee37c876b13270b147f21c84a03a_6 = MAKE_CLASS_FRAME(tstate, codeobj_a887ee37c876b13270b147f21c84a03a, module_sqlalchemy$engine$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a887ee37c876b13270b147f21c84a03a_6);
        assert(Py_REFCNT(frame_a887ee37c876b13270b147f21c84a03a_6) == 2);

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[264], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1552;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[252], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1565;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[265], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1575;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[266], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1582;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[267], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1589;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1596;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[269], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1603;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[270], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1613;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[271], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1624;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[184], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1644;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[272], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1669;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a887ee37c876b13270b147f21c84a03a_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a887ee37c876b13270b147f21c84a03a_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a887ee37c876b13270b147f21c84a03a_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a887ee37c876b13270b147f21c84a03a_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_a887ee37c876b13270b147f21c84a03a_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            tmp_cmp_expr_right_5 = mod_consts[85];
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1540;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540, mod_consts[211], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1540;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_16 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_15 = mod_consts[262];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_15 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1540;
            tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1540;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_41 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540);
        locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540);
        locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1540 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 1540;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_41);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dircall_arg1_6;
        tmp_dircall_arg1_6 = mod_consts[85];
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_43 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        tmp_condition_result_25 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_32 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[77];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_33 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts[86]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_34 = tmp_class_creation_6__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[86]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        tmp_tuple_element_16 = mod_consts[273];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_16 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1689;
        tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_46;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_35 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts[88]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_36 = tmp_class_creation_6__metaclass;
        tmp_name_value_10 = mod_consts[90];
        tmp_default_value_6 = mod_consts[91];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_36, tmp_name_value_10, tmp_default_value_6);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_37 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[90]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1689;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 1689;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_47;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[274];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[273];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_18;
        }
        frame_d481466a7c8f3b629a3770b8706016a3_7 = MAKE_CLASS_FRAME(tstate, codeobj_d481466a7c8f3b629a3770b8706016a3, module_sqlalchemy$engine$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d481466a7c8f3b629a3770b8706016a3_7);
        assert(Py_REFCNT(frame_d481466a7c8f3b629a3770b8706016a3_7) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[275];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[276], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1699;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_7;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[277]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1701;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_28 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_18 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[277]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[277]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 1701;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1701;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__72_driver_connection();

            frame_d481466a7c8f3b629a3770b8706016a3_7->m_frame.f_lineno = 1701;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1701;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_19 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_7 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__72_driver_connection();

            frame_d481466a7c8f3b629a3770b8706016a3_7->m_frame.f_lineno = 1701;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1701;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[278], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1702;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__73_run_async();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[280], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1706;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__74___repr__();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[282], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1735;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d481466a7c8f3b629a3770b8706016a3_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d481466a7c8f3b629a3770b8706016a3_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d481466a7c8f3b629a3770b8706016a3_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d481466a7c8f3b629a3770b8706016a3_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_d481466a7c8f3b629a3770b8706016a3_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            tmp_cmp_expr_right_6 = mod_consts[85];
            tmp_condition_result_29 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_29 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1689;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689, mod_consts[211], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_20 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_18 = mod_consts[273];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_18 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_e6a93aebff3e6588bbc71af05df38390->m_frame.f_lineno = 1689;
            tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1689;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_49;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_48 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689);
        locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689);
        locals_sqlalchemy$engine$interfaces$$$class__6_AdaptedConnection_1689 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 1689;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_48);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6a93aebff3e6588bbc71af05df38390, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6a93aebff3e6588bbc71af05df38390->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6a93aebff3e6588bbc71af05df38390, exception_lineno);
    }



    assertFrameObject(frame_e6a93aebff3e6588bbc71af05df38390);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.engine.interfaces", false);

    Py_INCREF(module_sqlalchemy$engine$interfaces);
    return module_sqlalchemy$engine$interfaces;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$engine$interfaces", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
