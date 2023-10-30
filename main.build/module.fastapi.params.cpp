/* Generated code for Python module 'fastapi.params'
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

/* The "module_fastapi$params" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_fastapi$params;
PyDictObject *moduledict_fastapi$params;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[114];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[114];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("fastapi.params"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 114; i++) {
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
void checkModuleConstants_fastapi$params(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 114; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0680c777b7beeafd23199c36958bc72c;
static PyCodeObject *codeobj_c9607a06059d20d9952d91c225ee3850;
static PyCodeObject *codeobj_07310af2ce8926044aa6fc2da559a22c;
static PyCodeObject *codeobj_82ce8237d7a014aafad57e0ce5b61474;
static PyCodeObject *codeobj_ac10d3d09d8cfa8106401794a03aa063;
static PyCodeObject *codeobj_059169012f0e00ebffe5d6f4e54377b7;
static PyCodeObject *codeobj_bcf6b849865ade0ae1493f89d2ec49c9;
static PyCodeObject *codeobj_ed4756905595a8cacbbf5c8989fb41e4;
static PyCodeObject *codeobj_abe226c10cd01009f0daebb346a861ea;
static PyCodeObject *codeobj_57e7c3b600e86225f87fb2d0edabb26a;
static PyCodeObject *codeobj_7a0f5a44fb2be4b65bf192c15fb8e0b6;
static PyCodeObject *codeobj_bb3048d05f5d727dcb4ab98e538c94ac;
static PyCodeObject *codeobj_8295da5b6bf93c62a98ef314414d468d;
static PyCodeObject *codeobj_6058f1640f7f56cb26e72acbed42f7e0;
static PyCodeObject *codeobj_f21f5d37ae54ceb3f8230412d785c0e0;
static PyCodeObject *codeobj_0d83a023e374f1531a6926db9b561836;
static PyCodeObject *codeobj_49b65736c4aa330f2857eefe8fcd9dfd;
static PyCodeObject *codeobj_611904ed28290a337b240d523931ad49;
static PyCodeObject *codeobj_79cdb0f091996df5a1be01c59c6c7819;
static PyCodeObject *codeobj_161c8f549fcb5d429b2eb8f6f7618890;
static PyCodeObject *codeobj_1e3251d17283f85f3a277516b058dc31;
static PyCodeObject *codeobj_9db18496ed60007d973c4547b987a4bc;
static PyCodeObject *codeobj_41ba820348f951ff300fe60e88a5cf98;
static PyCodeObject *codeobj_9c1d09a09928556a4da211f3fe6fa2ab;
static PyCodeObject *codeobj_0deccbc1caeb2fec72a1ad9c8878a0eb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[103]); CHECK_OBJECT(module_filename_obj);
    codeobj_0680c777b7beeafd23199c36958bc72c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[104], mod_consts[104], NULL, NULL, 0, 0, 0);
    codeobj_c9607a06059d20d9952d91c225ee3850 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[105], NULL, 0, 0, 0);
    codeobj_07310af2ce8926044aa6fc2da559a22c = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[105], NULL, 0, 0, 0);
    codeobj_82ce8237d7a014aafad57e0ce5b61474 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[105], NULL, 0, 0, 0);
    codeobj_ac10d3d09d8cfa8106401794a03aa063 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[105], NULL, 0, 0, 0);
    codeobj_059169012f0e00ebffe5d6f4e54377b7 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[105], NULL, 0, 0, 0);
    codeobj_bcf6b849865ade0ae1493f89d2ec49c9 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[105], NULL, 0, 0, 0);
    codeobj_ed4756905595a8cacbbf5c8989fb41e4 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[105], NULL, 0, 0, 0);
    codeobj_abe226c10cd01009f0daebb346a861ea = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[105], NULL, 0, 0, 0);
    codeobj_57e7c3b600e86225f87fb2d0edabb26a = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[105], NULL, 0, 0, 0);
    codeobj_7a0f5a44fb2be4b65bf192c15fb8e0b6 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[105], NULL, 0, 0, 0);
    codeobj_bb3048d05f5d727dcb4ab98e538c94ac = MAKE_CODE_OBJECT(module_filename_obj, 372, CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[105], NULL, 0, 0, 0);
    codeobj_8295da5b6bf93c62a98ef314414d468d = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[5], mod_consts[5], mod_consts[106], mod_consts[105], 2, 15, 0);
    codeobj_6058f1640f7f56cb26e72acbed42f7e0 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[5], mod_consts[5], mod_consts[107], mod_consts[105], 2, 14, 0);
    codeobj_f21f5d37ae54ceb3f8230412d785c0e0 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[5], mod_consts[5], mod_consts[107], mod_consts[105], 2, 14, 0);
    codeobj_0d83a023e374f1531a6926db9b561836 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[5], mod_consts[5], mod_consts[107], mod_consts[105], 2, 14, 0);
    codeobj_49b65736c4aa330f2857eefe8fcd9dfd = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[5], mod_consts[5], mod_consts[107], mod_consts[105], 2, 14, 0);
    codeobj_611904ed28290a337b240d523931ad49 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[5], mod_consts[5], mod_consts[108], mod_consts[105], 2, 14, 0);
    codeobj_79cdb0f091996df5a1be01c59c6c7819 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[5], mod_consts[5], mod_consts[109], mod_consts[105], 2, 13, 0);
    codeobj_161c8f549fcb5d429b2eb8f6f7618890 = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[5], mod_consts[5], mod_consts[109], mod_consts[105], 2, 13, 0);
    codeobj_1e3251d17283f85f3a277516b058dc31 = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[5], mod_consts[110], mod_consts[105], 2, 2, 0);
    codeobj_9db18496ed60007d973c4547b987a4bc = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[111], NULL, 2, 1, 0);
    codeobj_41ba820348f951ff300fe60e88a5cf98 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[112], NULL, 1, 0, 0);
    codeobj_9c1d09a09928556a4da211f3fe6fa2ab = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[112], NULL, 1, 0, 0);
    codeobj_0deccbc1caeb2fec72a1ad9c8878a0eb = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[113], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__10___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__11___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__12___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__13___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__1___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__2___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__3___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__4___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__5___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__6___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__7___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__8___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$params$$$function__9___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_fastapi$params$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_alias = python_pars[2];
    PyObject *par_title = python_pars[3];
    PyObject *par_description = python_pars[4];
    PyObject *par_gt = python_pars[5];
    PyObject *par_ge = python_pars[6];
    PyObject *par_lt = python_pars[7];
    PyObject *par_le = python_pars[8];
    PyObject *par_min_length = python_pars[9];
    PyObject *par_max_length = python_pars[10];
    PyObject *par_regex = python_pars[11];
    PyObject *par_example = python_pars[12];
    PyObject *par_examples = python_pars[13];
    PyObject *par_deprecated = python_pars[14];
    PyObject *par_include_in_schema = python_pars[15];
    PyObject *par_extra = python_pars[16];
    struct Nuitka_FrameObject *frame_6058f1640f7f56cb26e72acbed42f7e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6058f1640f7f56cb26e72acbed42f7e0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6058f1640f7f56cb26e72acbed42f7e0)) {
        Py_XDECREF(cache_frame_6058f1640f7f56cb26e72acbed42f7e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6058f1640f7f56cb26e72acbed42f7e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6058f1640f7f56cb26e72acbed42f7e0 = MAKE_FUNCTION_FRAME(tstate, codeobj_6058f1640f7f56cb26e72acbed42f7e0, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6058f1640f7f56cb26e72acbed42f7e0->m_type_description == NULL);
    frame_6058f1640f7f56cb26e72acbed42f7e0 = cache_frame_6058f1640f7f56cb26e72acbed42f7e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6058f1640f7f56cb26e72acbed42f7e0);
    assert(Py_REFCNT(frame_6058f1640f7f56cb26e72acbed42f7e0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_deprecated);
        tmp_assattr_value_1 = par_deprecated;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_example);
        tmp_assattr_value_2 = par_example;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_examples);
        tmp_assattr_value_3 = par_examples;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_include_in_schema);
        tmp_assattr_value_4 = par_include_in_schema;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 11 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6058f1640f7f56cb26e72acbed42f7e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6058f1640f7f56cb26e72acbed42f7e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6058f1640f7f56cb26e72acbed42f7e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6058f1640f7f56cb26e72acbed42f7e0,
        type_description_1,
        par_self,
        par_default,
        par_alias,
        par_title,
        par_description,
        par_gt,
        par_ge,
        par_lt,
        par_le,
        par_min_length,
        par_max_length,
        par_regex,
        par_example,
        par_examples,
        par_deprecated,
        par_include_in_schema,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6058f1640f7f56cb26e72acbed42f7e0 == cache_frame_6058f1640f7f56cb26e72acbed42f7e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6058f1640f7f56cb26e72acbed42f7e0);
        cache_frame_6058f1640f7f56cb26e72acbed42f7e0 = NULL;
    }

    assertFrameObject(frame_6058f1640f7f56cb26e72acbed42f7e0);

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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_41ba820348f951ff300fe60e88a5cf98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41ba820348f951ff300fe60e88a5cf98 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41ba820348f951ff300fe60e88a5cf98)) {
        Py_XDECREF(cache_frame_41ba820348f951ff300fe60e88a5cf98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41ba820348f951ff300fe60e88a5cf98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41ba820348f951ff300fe60e88a5cf98 = MAKE_FUNCTION_FRAME(tstate, codeobj_41ba820348f951ff300fe60e88a5cf98, module_fastapi$params, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41ba820348f951ff300fe60e88a5cf98->m_type_description == NULL);
    frame_41ba820348f951ff300fe60e88a5cf98 = cache_frame_41ba820348f951ff300fe60e88a5cf98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_41ba820348f951ff300fe60e88a5cf98);
    assert(Py_REFCNT(frame_41ba820348f951ff300fe60e88a5cf98) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[18];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[6]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[18];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[18], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
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
        exception_tb = MAKE_TRACEBACK(frame_41ba820348f951ff300fe60e88a5cf98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41ba820348f951ff300fe60e88a5cf98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41ba820348f951ff300fe60e88a5cf98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41ba820348f951ff300fe60e88a5cf98,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_41ba820348f951ff300fe60e88a5cf98 == cache_frame_41ba820348f951ff300fe60e88a5cf98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41ba820348f951ff300fe60e88a5cf98);
        cache_frame_41ba820348f951ff300fe60e88a5cf98 = NULL;
    }

    assertFrameObject(frame_41ba820348f951ff300fe60e88a5cf98);

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


static PyObject *impl_fastapi$params$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_alias = python_pars[2];
    PyObject *par_title = python_pars[3];
    PyObject *par_description = python_pars[4];
    PyObject *par_gt = python_pars[5];
    PyObject *par_ge = python_pars[6];
    PyObject *par_lt = python_pars[7];
    PyObject *par_le = python_pars[8];
    PyObject *par_min_length = python_pars[9];
    PyObject *par_max_length = python_pars[10];
    PyObject *par_regex = python_pars[11];
    PyObject *par_example = python_pars[12];
    PyObject *par_examples = python_pars[13];
    PyObject *par_deprecated = python_pars[14];
    PyObject *par_include_in_schema = python_pars[15];
    PyObject *par_extra = python_pars[16];
    struct Nuitka_FrameObject *frame_f21f5d37ae54ceb3f8230412d785c0e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f21f5d37ae54ceb3f8230412d785c0e0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f21f5d37ae54ceb3f8230412d785c0e0)) {
        Py_XDECREF(cache_frame_f21f5d37ae54ceb3f8230412d785c0e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f21f5d37ae54ceb3f8230412d785c0e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f21f5d37ae54ceb3f8230412d785c0e0 = MAKE_FUNCTION_FRAME(tstate, codeobj_f21f5d37ae54ceb3f8230412d785c0e0, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f21f5d37ae54ceb3f8230412d785c0e0->m_type_description == NULL);
    frame_f21f5d37ae54ceb3f8230412d785c0e0 = cache_frame_f21f5d37ae54ceb3f8230412d785c0e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f21f5d37ae54ceb3f8230412d785c0e0);
    assert(Py_REFCNT(frame_f21f5d37ae54ceb3f8230412d785c0e0) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_default);
        tmp_cmp_expr_left_1 = par_default;
        tmp_cmp_expr_right_1 = Py_Ellipsis;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[21];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 83;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_2 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[0];
        CHECK_OBJECT(par_deprecated);
        tmp_dict_value_1 = par_deprecated;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_include_in_schema);
        tmp_dict_value_1 = par_include_in_schema;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f21f5d37ae54ceb3f8230412d785c0e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f21f5d37ae54ceb3f8230412d785c0e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f21f5d37ae54ceb3f8230412d785c0e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f21f5d37ae54ceb3f8230412d785c0e0,
        type_description_1,
        par_self,
        par_default,
        par_alias,
        par_title,
        par_description,
        par_gt,
        par_ge,
        par_lt,
        par_le,
        par_min_length,
        par_max_length,
        par_regex,
        par_example,
        par_examples,
        par_deprecated,
        par_include_in_schema,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f21f5d37ae54ceb3f8230412d785c0e0 == cache_frame_f21f5d37ae54ceb3f8230412d785c0e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f21f5d37ae54ceb3f8230412d785c0e0);
        cache_frame_f21f5d37ae54ceb3f8230412d785c0e0 = NULL;
    }

    assertFrameObject(frame_f21f5d37ae54ceb3f8230412d785c0e0);

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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_alias = python_pars[2];
    PyObject *par_title = python_pars[3];
    PyObject *par_description = python_pars[4];
    PyObject *par_gt = python_pars[5];
    PyObject *par_ge = python_pars[6];
    PyObject *par_lt = python_pars[7];
    PyObject *par_le = python_pars[8];
    PyObject *par_min_length = python_pars[9];
    PyObject *par_max_length = python_pars[10];
    PyObject *par_regex = python_pars[11];
    PyObject *par_example = python_pars[12];
    PyObject *par_examples = python_pars[13];
    PyObject *par_deprecated = python_pars[14];
    PyObject *par_include_in_schema = python_pars[15];
    PyObject *par_extra = python_pars[16];
    struct Nuitka_FrameObject *frame_0d83a023e374f1531a6926db9b561836;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0d83a023e374f1531a6926db9b561836 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d83a023e374f1531a6926db9b561836)) {
        Py_XDECREF(cache_frame_0d83a023e374f1531a6926db9b561836);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d83a023e374f1531a6926db9b561836 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d83a023e374f1531a6926db9b561836 = MAKE_FUNCTION_FRAME(tstate, codeobj_0d83a023e374f1531a6926db9b561836, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d83a023e374f1531a6926db9b561836->m_type_description == NULL);
    frame_0d83a023e374f1531a6926db9b561836 = cache_frame_0d83a023e374f1531a6926db9b561836;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0d83a023e374f1531a6926db9b561836);
    assert(Py_REFCNT(frame_0d83a023e374f1531a6926db9b561836) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[0];
        CHECK_OBJECT(par_deprecated);
        tmp_dict_value_1 = par_deprecated;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_include_in_schema);
        tmp_dict_value_1 = par_include_in_schema;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d83a023e374f1531a6926db9b561836, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d83a023e374f1531a6926db9b561836->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d83a023e374f1531a6926db9b561836, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d83a023e374f1531a6926db9b561836,
        type_description_1,
        par_self,
        par_default,
        par_alias,
        par_title,
        par_description,
        par_gt,
        par_ge,
        par_lt,
        par_le,
        par_min_length,
        par_max_length,
        par_regex,
        par_example,
        par_examples,
        par_deprecated,
        par_include_in_schema,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0d83a023e374f1531a6926db9b561836 == cache_frame_0d83a023e374f1531a6926db9b561836) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d83a023e374f1531a6926db9b561836);
        cache_frame_0d83a023e374f1531a6926db9b561836 = NULL;
    }

    assertFrameObject(frame_0d83a023e374f1531a6926db9b561836);

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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_alias = python_pars[2];
    PyObject *par_convert_underscores = python_pars[3];
    PyObject *par_title = python_pars[4];
    PyObject *par_description = python_pars[5];
    PyObject *par_gt = python_pars[6];
    PyObject *par_ge = python_pars[7];
    PyObject *par_lt = python_pars[8];
    PyObject *par_le = python_pars[9];
    PyObject *par_min_length = python_pars[10];
    PyObject *par_max_length = python_pars[11];
    PyObject *par_regex = python_pars[12];
    PyObject *par_example = python_pars[13];
    PyObject *par_examples = python_pars[14];
    PyObject *par_deprecated = python_pars[15];
    PyObject *par_include_in_schema = python_pars[16];
    PyObject *par_extra = python_pars[17];
    struct Nuitka_FrameObject *frame_8295da5b6bf93c62a98ef314414d468d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8295da5b6bf93c62a98ef314414d468d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8295da5b6bf93c62a98ef314414d468d)) {
        Py_XDECREF(cache_frame_8295da5b6bf93c62a98ef314414d468d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8295da5b6bf93c62a98ef314414d468d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8295da5b6bf93c62a98ef314414d468d = MAKE_FUNCTION_FRAME(tstate, codeobj_8295da5b6bf93c62a98ef314414d468d, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8295da5b6bf93c62a98ef314414d468d->m_type_description == NULL);
    frame_8295da5b6bf93c62a98ef314414d468d = cache_frame_8295da5b6bf93c62a98ef314414d468d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8295da5b6bf93c62a98ef314414d468d);
    assert(Py_REFCNT(frame_8295da5b6bf93c62a98ef314414d468d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_convert_underscores);
        tmp_assattr_value_1 = par_convert_underscores;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[0];
        CHECK_OBJECT(par_deprecated);
        tmp_dict_value_1 = par_deprecated;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_include_in_schema);
        tmp_dict_value_1 = par_include_in_schema;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8295da5b6bf93c62a98ef314414d468d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8295da5b6bf93c62a98ef314414d468d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8295da5b6bf93c62a98ef314414d468d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8295da5b6bf93c62a98ef314414d468d,
        type_description_1,
        par_self,
        par_default,
        par_alias,
        par_convert_underscores,
        par_title,
        par_description,
        par_gt,
        par_ge,
        par_lt,
        par_le,
        par_min_length,
        par_max_length,
        par_regex,
        par_example,
        par_examples,
        par_deprecated,
        par_include_in_schema,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8295da5b6bf93c62a98ef314414d468d == cache_frame_8295da5b6bf93c62a98ef314414d468d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8295da5b6bf93c62a98ef314414d468d);
        cache_frame_8295da5b6bf93c62a98ef314414d468d = NULL;
    }

    assertFrameObject(frame_8295da5b6bf93c62a98ef314414d468d);

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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_convert_underscores);
    Py_DECREF(par_convert_underscores);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_convert_underscores);
    Py_DECREF(par_convert_underscores);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_alias = python_pars[2];
    PyObject *par_title = python_pars[3];
    PyObject *par_description = python_pars[4];
    PyObject *par_gt = python_pars[5];
    PyObject *par_ge = python_pars[6];
    PyObject *par_lt = python_pars[7];
    PyObject *par_le = python_pars[8];
    PyObject *par_min_length = python_pars[9];
    PyObject *par_max_length = python_pars[10];
    PyObject *par_regex = python_pars[11];
    PyObject *par_example = python_pars[12];
    PyObject *par_examples = python_pars[13];
    PyObject *par_deprecated = python_pars[14];
    PyObject *par_include_in_schema = python_pars[15];
    PyObject *par_extra = python_pars[16];
    struct Nuitka_FrameObject *frame_49b65736c4aa330f2857eefe8fcd9dfd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_49b65736c4aa330f2857eefe8fcd9dfd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_49b65736c4aa330f2857eefe8fcd9dfd)) {
        Py_XDECREF(cache_frame_49b65736c4aa330f2857eefe8fcd9dfd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49b65736c4aa330f2857eefe8fcd9dfd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49b65736c4aa330f2857eefe8fcd9dfd = MAKE_FUNCTION_FRAME(tstate, codeobj_49b65736c4aa330f2857eefe8fcd9dfd, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49b65736c4aa330f2857eefe8fcd9dfd->m_type_description == NULL);
    frame_49b65736c4aa330f2857eefe8fcd9dfd = cache_frame_49b65736c4aa330f2857eefe8fcd9dfd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_49b65736c4aa330f2857eefe8fcd9dfd);
    assert(Py_REFCNT(frame_49b65736c4aa330f2857eefe8fcd9dfd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[0];
        CHECK_OBJECT(par_deprecated);
        tmp_dict_value_1 = par_deprecated;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_include_in_schema);
        tmp_dict_value_1 = par_include_in_schema;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49b65736c4aa330f2857eefe8fcd9dfd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49b65736c4aa330f2857eefe8fcd9dfd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49b65736c4aa330f2857eefe8fcd9dfd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49b65736c4aa330f2857eefe8fcd9dfd,
        type_description_1,
        par_self,
        par_default,
        par_alias,
        par_title,
        par_description,
        par_gt,
        par_ge,
        par_lt,
        par_le,
        par_min_length,
        par_max_length,
        par_regex,
        par_example,
        par_examples,
        par_deprecated,
        par_include_in_schema,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_49b65736c4aa330f2857eefe8fcd9dfd == cache_frame_49b65736c4aa330f2857eefe8fcd9dfd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49b65736c4aa330f2857eefe8fcd9dfd);
        cache_frame_49b65736c4aa330f2857eefe8fcd9dfd = NULL;
    }

    assertFrameObject(frame_49b65736c4aa330f2857eefe8fcd9dfd);

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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_deprecated);
    Py_DECREF(par_deprecated);
    CHECK_OBJECT(par_include_in_schema);
    Py_DECREF(par_include_in_schema);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_embed = python_pars[2];
    PyObject *par_media_type = python_pars[3];
    PyObject *par_alias = python_pars[4];
    PyObject *par_title = python_pars[5];
    PyObject *par_description = python_pars[6];
    PyObject *par_gt = python_pars[7];
    PyObject *par_ge = python_pars[8];
    PyObject *par_lt = python_pars[9];
    PyObject *par_le = python_pars[10];
    PyObject *par_min_length = python_pars[11];
    PyObject *par_max_length = python_pars[12];
    PyObject *par_regex = python_pars[13];
    PyObject *par_example = python_pars[14];
    PyObject *par_examples = python_pars[15];
    PyObject *par_extra = python_pars[16];
    struct Nuitka_FrameObject *frame_611904ed28290a337b240d523931ad49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_611904ed28290a337b240d523931ad49 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_611904ed28290a337b240d523931ad49)) {
        Py_XDECREF(cache_frame_611904ed28290a337b240d523931ad49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_611904ed28290a337b240d523931ad49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_611904ed28290a337b240d523931ad49 = MAKE_FUNCTION_FRAME(tstate, codeobj_611904ed28290a337b240d523931ad49, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_611904ed28290a337b240d523931ad49->m_type_description == NULL);
    frame_611904ed28290a337b240d523931ad49 = cache_frame_611904ed28290a337b240d523931ad49;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_611904ed28290a337b240d523931ad49);
    assert(Py_REFCNT(frame_611904ed28290a337b240d523931ad49) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_embed);
        tmp_assattr_value_1 = par_embed;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_media_type);
        tmp_assattr_value_2 = par_media_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[25], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_example);
        tmp_assattr_value_3 = par_example;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[1], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_examples);
        tmp_assattr_value_4 = par_examples;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[2], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 11 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_611904ed28290a337b240d523931ad49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_611904ed28290a337b240d523931ad49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_611904ed28290a337b240d523931ad49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_611904ed28290a337b240d523931ad49,
        type_description_1,
        par_self,
        par_default,
        par_embed,
        par_media_type,
        par_alias,
        par_title,
        par_description,
        par_gt,
        par_ge,
        par_lt,
        par_le,
        par_min_length,
        par_max_length,
        par_regex,
        par_example,
        par_examples,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_611904ed28290a337b240d523931ad49 == cache_frame_611904ed28290a337b240d523931ad49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_611904ed28290a337b240d523931ad49);
        cache_frame_611904ed28290a337b240d523931ad49 = NULL;
    }

    assertFrameObject(frame_611904ed28290a337b240d523931ad49);

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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_embed);
    Py_DECREF(par_embed);
    CHECK_OBJECT(par_media_type);
    Py_DECREF(par_media_type);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_embed);
    Py_DECREF(par_embed);
    CHECK_OBJECT(par_media_type);
    Py_DECREF(par_media_type);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__8___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9c1d09a09928556a4da211f3fe6fa2ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c1d09a09928556a4da211f3fe6fa2ab = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c1d09a09928556a4da211f3fe6fa2ab)) {
        Py_XDECREF(cache_frame_9c1d09a09928556a4da211f3fe6fa2ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c1d09a09928556a4da211f3fe6fa2ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c1d09a09928556a4da211f3fe6fa2ab = MAKE_FUNCTION_FRAME(tstate, codeobj_9c1d09a09928556a4da211f3fe6fa2ab, module_fastapi$params, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c1d09a09928556a4da211f3fe6fa2ab->m_type_description == NULL);
    frame_9c1d09a09928556a4da211f3fe6fa2ab = cache_frame_9c1d09a09928556a4da211f3fe6fa2ab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9c1d09a09928556a4da211f3fe6fa2ab);
    assert(Py_REFCNT(frame_9c1d09a09928556a4da211f3fe6fa2ab) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[18];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[6]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[18];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[18], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
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
        exception_tb = MAKE_TRACEBACK(frame_9c1d09a09928556a4da211f3fe6fa2ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c1d09a09928556a4da211f3fe6fa2ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c1d09a09928556a4da211f3fe6fa2ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c1d09a09928556a4da211f3fe6fa2ab,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9c1d09a09928556a4da211f3fe6fa2ab == cache_frame_9c1d09a09928556a4da211f3fe6fa2ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c1d09a09928556a4da211f3fe6fa2ab);
        cache_frame_9c1d09a09928556a4da211f3fe6fa2ab = NULL;
    }

    assertFrameObject(frame_9c1d09a09928556a4da211f3fe6fa2ab);

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


static PyObject *impl_fastapi$params$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_media_type = python_pars[2];
    PyObject *par_alias = python_pars[3];
    PyObject *par_title = python_pars[4];
    PyObject *par_description = python_pars[5];
    PyObject *par_gt = python_pars[6];
    PyObject *par_ge = python_pars[7];
    PyObject *par_lt = python_pars[8];
    PyObject *par_le = python_pars[9];
    PyObject *par_min_length = python_pars[10];
    PyObject *par_max_length = python_pars[11];
    PyObject *par_regex = python_pars[12];
    PyObject *par_example = python_pars[13];
    PyObject *par_examples = python_pars[14];
    PyObject *par_extra = python_pars[15];
    struct Nuitka_FrameObject *frame_79cdb0f091996df5a1be01c59c6c7819;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_79cdb0f091996df5a1be01c59c6c7819 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79cdb0f091996df5a1be01c59c6c7819)) {
        Py_XDECREF(cache_frame_79cdb0f091996df5a1be01c59c6c7819);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79cdb0f091996df5a1be01c59c6c7819 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79cdb0f091996df5a1be01c59c6c7819 = MAKE_FUNCTION_FRAME(tstate, codeobj_79cdb0f091996df5a1be01c59c6c7819, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_79cdb0f091996df5a1be01c59c6c7819->m_type_description == NULL);
    frame_79cdb0f091996df5a1be01c59c6c7819 = cache_frame_79cdb0f091996df5a1be01c59c6c7819;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_79cdb0f091996df5a1be01c59c6c7819);
    assert(Py_REFCNT(frame_79cdb0f091996df5a1be01c59c6c7819) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = Py_True;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        CHECK_OBJECT(par_media_type);
        tmp_dict_value_1 = par_media_type;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79cdb0f091996df5a1be01c59c6c7819, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79cdb0f091996df5a1be01c59c6c7819->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79cdb0f091996df5a1be01c59c6c7819, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79cdb0f091996df5a1be01c59c6c7819,
        type_description_1,
        par_self,
        par_default,
        par_media_type,
        par_alias,
        par_title,
        par_description,
        par_gt,
        par_ge,
        par_lt,
        par_le,
        par_min_length,
        par_max_length,
        par_regex,
        par_example,
        par_examples,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_79cdb0f091996df5a1be01c59c6c7819 == cache_frame_79cdb0f091996df5a1be01c59c6c7819) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_79cdb0f091996df5a1be01c59c6c7819);
        cache_frame_79cdb0f091996df5a1be01c59c6c7819 = NULL;
    }

    assertFrameObject(frame_79cdb0f091996df5a1be01c59c6c7819);

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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_media_type);
    Py_DECREF(par_media_type);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_media_type);
    Py_DECREF(par_media_type);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_media_type = python_pars[2];
    PyObject *par_alias = python_pars[3];
    PyObject *par_title = python_pars[4];
    PyObject *par_description = python_pars[5];
    PyObject *par_gt = python_pars[6];
    PyObject *par_ge = python_pars[7];
    PyObject *par_lt = python_pars[8];
    PyObject *par_le = python_pars[9];
    PyObject *par_min_length = python_pars[10];
    PyObject *par_max_length = python_pars[11];
    PyObject *par_regex = python_pars[12];
    PyObject *par_example = python_pars[13];
    PyObject *par_examples = python_pars[14];
    PyObject *par_extra = python_pars[15];
    struct Nuitka_FrameObject *frame_161c8f549fcb5d429b2eb8f6f7618890;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_161c8f549fcb5d429b2eb8f6f7618890 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_161c8f549fcb5d429b2eb8f6f7618890)) {
        Py_XDECREF(cache_frame_161c8f549fcb5d429b2eb8f6f7618890);

#if _DEBUG_REFCOUNTS
        if (cache_frame_161c8f549fcb5d429b2eb8f6f7618890 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_161c8f549fcb5d429b2eb8f6f7618890 = MAKE_FUNCTION_FRAME(tstate, codeobj_161c8f549fcb5d429b2eb8f6f7618890, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_161c8f549fcb5d429b2eb8f6f7618890->m_type_description == NULL);
    frame_161c8f549fcb5d429b2eb8f6f7618890 = cache_frame_161c8f549fcb5d429b2eb8f6f7618890;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_161c8f549fcb5d429b2eb8f6f7618890);
    assert(Py_REFCNT(frame_161c8f549fcb5d429b2eb8f6f7618890) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        CHECK_OBJECT(par_media_type);
        tmp_dict_value_1 = par_media_type;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_161c8f549fcb5d429b2eb8f6f7618890, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_161c8f549fcb5d429b2eb8f6f7618890->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_161c8f549fcb5d429b2eb8f6f7618890, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_161c8f549fcb5d429b2eb8f6f7618890,
        type_description_1,
        par_self,
        par_default,
        par_media_type,
        par_alias,
        par_title,
        par_description,
        par_gt,
        par_ge,
        par_lt,
        par_le,
        par_min_length,
        par_max_length,
        par_regex,
        par_example,
        par_examples,
        par_extra,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_161c8f549fcb5d429b2eb8f6f7618890 == cache_frame_161c8f549fcb5d429b2eb8f6f7618890) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_161c8f549fcb5d429b2eb8f6f7618890);
        cache_frame_161c8f549fcb5d429b2eb8f6f7618890 = NULL;
    }

    assertFrameObject(frame_161c8f549fcb5d429b2eb8f6f7618890);

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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_media_type);
    Py_DECREF(par_media_type);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_media_type);
    Py_DECREF(par_media_type);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_description);
    Py_DECREF(par_description);
    CHECK_OBJECT(par_gt);
    Py_DECREF(par_gt);
    CHECK_OBJECT(par_ge);
    Py_DECREF(par_ge);
    CHECK_OBJECT(par_lt);
    Py_DECREF(par_lt);
    CHECK_OBJECT(par_le);
    Py_DECREF(par_le);
    CHECK_OBJECT(par_min_length);
    Py_DECREF(par_min_length);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_example);
    Py_DECREF(par_example);
    CHECK_OBJECT(par_examples);
    Py_DECREF(par_examples);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dependency = python_pars[1];
    PyObject *par_use_cache = python_pars[2];
    struct Nuitka_FrameObject *frame_9db18496ed60007d973c4547b987a4bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9db18496ed60007d973c4547b987a4bc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9db18496ed60007d973c4547b987a4bc)) {
        Py_XDECREF(cache_frame_9db18496ed60007d973c4547b987a4bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9db18496ed60007d973c4547b987a4bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9db18496ed60007d973c4547b987a4bc = MAKE_FUNCTION_FRAME(tstate, codeobj_9db18496ed60007d973c4547b987a4bc, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9db18496ed60007d973c4547b987a4bc->m_type_description == NULL);
    frame_9db18496ed60007d973c4547b987a4bc = cache_frame_9db18496ed60007d973c4547b987a4bc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9db18496ed60007d973c4547b987a4bc);
    assert(Py_REFCNT(frame_9db18496ed60007d973c4547b987a4bc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_dependency);
        tmp_assattr_value_1 = par_dependency;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_use_cache);
        tmp_assattr_value_2 = par_use_cache;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[27], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9db18496ed60007d973c4547b987a4bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9db18496ed60007d973c4547b987a4bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9db18496ed60007d973c4547b987a4bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9db18496ed60007d973c4547b987a4bc,
        type_description_1,
        par_self,
        par_dependency,
        par_use_cache
    );


    // Release cached frame if used for exception.
    if (frame_9db18496ed60007d973c4547b987a4bc == cache_frame_9db18496ed60007d973c4547b987a4bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9db18496ed60007d973c4547b987a4bc);
        cache_frame_9db18496ed60007d973c4547b987a4bc = NULL;
    }

    assertFrameObject(frame_9db18496ed60007d973c4547b987a4bc);

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
    CHECK_OBJECT(par_dependency);
    Py_DECREF(par_dependency);
    CHECK_OBJECT(par_use_cache);
    Py_DECREF(par_use_cache);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dependency);
    Py_DECREF(par_dependency);
    CHECK_OBJECT(par_use_cache);
    Py_DECREF(par_use_cache);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_fastapi$params$$$function__12___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_attr = NULL;
    PyObject *var_cache = NULL;
    struct Nuitka_FrameObject *frame_0deccbc1caeb2fec72a1ad9c8878a0eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb)) {
        Py_XDECREF(cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb = MAKE_FUNCTION_FRAME(tstate, codeobj_0deccbc1caeb2fec72a1ad9c8878a0eb, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb->m_type_description == NULL);
    frame_0deccbc1caeb2fec72a1ad9c8878a0eb = cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0deccbc1caeb2fec72a1ad9c8878a0eb);
    assert(Py_REFCNT(frame_0deccbc1caeb2fec72a1ad9c8878a0eb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_name_value_1 = mod_consts[17];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_type_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[26]);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[17]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_default_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_default_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_attr == NULL);
        var_attr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[27]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_2 = mod_consts[18];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_2 = mod_consts[28];
        condexpr_end_1:;
        assert(var_cache == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_cache = tmp_assign_source_2;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[17]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[18];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_attr);
            tmp_format_value_2 = var_attr;
            tmp_format_spec_2 = mod_consts[18];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_cache);
            tmp_tuple_element_1 = var_cache;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[18], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0deccbc1caeb2fec72a1ad9c8878a0eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0deccbc1caeb2fec72a1ad9c8878a0eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0deccbc1caeb2fec72a1ad9c8878a0eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0deccbc1caeb2fec72a1ad9c8878a0eb,
        type_description_1,
        par_self,
        var_attr,
        var_cache
    );


    // Release cached frame if used for exception.
    if (frame_0deccbc1caeb2fec72a1ad9c8878a0eb == cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb);
        cache_frame_0deccbc1caeb2fec72a1ad9c8878a0eb = NULL;
    }

    assertFrameObject(frame_0deccbc1caeb2fec72a1ad9c8878a0eb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_attr);
    Py_DECREF(var_attr);
    var_attr = NULL;
    CHECK_OBJECT(var_cache);
    Py_DECREF(var_cache);
    var_cache = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_cache);
    var_cache = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

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


static PyObject *impl_fastapi$params$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dependency = python_pars[1];
    PyObject *par_scopes = python_pars[2];
    PyObject *par_use_cache = python_pars[3];
    struct Nuitka_FrameObject *frame_1e3251d17283f85f3a277516b058dc31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1e3251d17283f85f3a277516b058dc31 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e3251d17283f85f3a277516b058dc31)) {
        Py_XDECREF(cache_frame_1e3251d17283f85f3a277516b058dc31);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e3251d17283f85f3a277516b058dc31 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e3251d17283f85f3a277516b058dc31 = MAKE_FUNCTION_FRAME(tstate, codeobj_1e3251d17283f85f3a277516b058dc31, module_fastapi$params, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e3251d17283f85f3a277516b058dc31->m_type_description == NULL);
    frame_1e3251d17283f85f3a277516b058dc31 = cache_frame_1e3251d17283f85f3a277516b058dc31;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e3251d17283f85f3a277516b058dc31);
    assert(Py_REFCNT(frame_1e3251d17283f85f3a277516b058dc31) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 380;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_fastapi$params, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dependency);
        tmp_kw_call_value_0_1 = par_dependency;
        CHECK_OBJECT(par_use_cache);
        tmp_kw_call_value_1_1 = par_use_cache;
        frame_1e3251d17283f85f3a277516b058dc31->m_frame.f_lineno = 380;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_scopes);
        tmp_or_left_value_1 = par_scopes;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = MAKE_LIST_EMPTY(0);
        tmp_assattr_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assattr_value_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e3251d17283f85f3a277516b058dc31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e3251d17283f85f3a277516b058dc31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e3251d17283f85f3a277516b058dc31, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e3251d17283f85f3a277516b058dc31,
        type_description_1,
        par_self,
        par_dependency,
        par_scopes,
        par_use_cache,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1e3251d17283f85f3a277516b058dc31 == cache_frame_1e3251d17283f85f3a277516b058dc31) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e3251d17283f85f3a277516b058dc31);
        cache_frame_1e3251d17283f85f3a277516b058dc31 = NULL;
    }

    assertFrameObject(frame_1e3251d17283f85f3a277516b058dc31);

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
    CHECK_OBJECT(par_dependency);
    Py_DECREF(par_dependency);
    CHECK_OBJECT(par_scopes);
    Py_DECREF(par_scopes);
    CHECK_OBJECT(par_use_cache);
    Py_DECREF(par_use_cache);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dependency);
    Py_DECREF(par_dependency);
    CHECK_OBJECT(par_scopes);
    Py_DECREF(par_scopes);
    CHECK_OBJECT(par_use_cache);
    Py_DECREF(par_use_cache);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__10___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__10___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_161c8f549fcb5d429b2eb8f6f7618890,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__11___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__11___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_9db18496ed60007d973c4547b987a4bc,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__12___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__12___repr__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_0deccbc1caeb2fec72a1ad9c8878a0eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__13___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__13___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_1e3251d17283f85f3a277516b058dc31,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__1___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__1___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_6058f1640f7f56cb26e72acbed42f7e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__2___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__2___repr__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_41ba820348f951ff300fe60e88a5cf98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__3___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__3___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_f21f5d37ae54ceb3f8230412d785c0e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__4___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__4___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_0d83a023e374f1531a6926db9b561836,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__5___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__5___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_8295da5b6bf93c62a98ef314414d468d,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__6___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__6___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_49b65736c4aa330f2857eefe8fcd9dfd,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__7___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__7___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_611904ed28290a337b240d523931ad49,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__8___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__8___repr__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_9c1d09a09928556a4da211f3fe6fa2ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$params$$$function__9___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$params$$$function__9___init__,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_79cdb0f091996df5a1be01c59c6c7819,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$params,
        NULL,
        closure,
        1
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

function_impl_code functable_fastapi$params[] = {
    impl_fastapi$params$$$function__1___init__,
    impl_fastapi$params$$$function__2___repr__,
    impl_fastapi$params$$$function__3___init__,
    impl_fastapi$params$$$function__4___init__,
    impl_fastapi$params$$$function__5___init__,
    impl_fastapi$params$$$function__6___init__,
    impl_fastapi$params$$$function__7___init__,
    impl_fastapi$params$$$function__8___repr__,
    impl_fastapi$params$$$function__9___init__,
    impl_fastapi$params$$$function__10___init__,
    impl_fastapi$params$$$function__11___init__,
    impl_fastapi$params$$$function__12___repr__,
    impl_fastapi$params$$$function__13___init__,
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

    function_impl_code *current = functable_fastapi$params;
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

    if (offset > sizeof(functable_fastapi$params) || offset < 0) {
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
        functable_fastapi$params[offset],
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
        module_fastapi$params,
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
PyObject *modulecode_fastapi$params(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("fastapi.params");

    // Store the module for future use.
    module_fastapi$params = module;

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
        PRINT_STRING("fastapi.params: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("fastapi.params: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initfastapi$params\n");

    moduledict_fastapi$params = MODULE_DICT(module_fastapi$params);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_fastapi$params,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_fastapi$params,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[18]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_fastapi$params,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_fastapi$params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_fastapi$params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_fastapi$params);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_fastapi$params);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = NULL;
    struct Nuitka_CellObject *outline_2_var___class__ = NULL;
    struct Nuitka_CellObject *outline_3_var___class__ = NULL;
    struct Nuitka_CellObject *outline_4_var___class__ = NULL;
    struct Nuitka_CellObject *outline_5_var___class__ = NULL;
    struct Nuitka_CellObject *outline_6_var___class__ = NULL;
    struct Nuitka_CellObject *outline_7_var___class__ = NULL;
    struct Nuitka_CellObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    struct Nuitka_CellObject *outline_10_var___class__ = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_0680c777b7beeafd23199c36958bc72c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *locals_fastapi$params$$$class__1_ParamTypes_7 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_abe226c10cd01009f0daebb346a861ea_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_fastapi$params$$$class__2_Param_14 = NULL;
    struct Nuitka_FrameObject *frame_ed4756905595a8cacbbf5c8989fb41e4_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_fastapi$params$$$class__3_Path_60 = NULL;
    struct Nuitka_FrameObject *frame_57e7c3b600e86225f87fb2d0edabb26a_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_fastapi$params$$$class__4_Query_105 = NULL;
    struct Nuitka_FrameObject *frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_fastapi$params$$$class__5_Header_148 = NULL;
    struct Nuitka_FrameObject *frame_bcf6b849865ade0ae1493f89d2ec49c9_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_fastapi$params$$$class__6_Cookie_193 = NULL;
    struct Nuitka_FrameObject *frame_07310af2ce8926044aa6fc2da559a22c_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_fastapi$params$$$class__7_Body_236 = NULL;
    struct Nuitka_FrameObject *frame_c9607a06059d20d9952d91c225ee3850_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_fastapi$params$$$class__8_Form_280 = NULL;
    struct Nuitka_FrameObject *frame_059169012f0e00ebffe5d6f4e54377b7_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *locals_fastapi$params$$$class__9_File_320 = NULL;
    struct Nuitka_FrameObject *frame_ac10d3d09d8cfa8106401794a03aa063_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_fastapi$params$$$class__10_Depends_359 = NULL;
    struct Nuitka_FrameObject *frame_82ce8237d7a014aafad57e0ce5b61474_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_fastapi$params$$$class__11_Security_372 = NULL;
    struct Nuitka_FrameObject *frame_bb3048d05f5d727dcb4ab98e538c94ac_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_2);
    }
    frame_0680c777b7beeafd23199c36958bc72c = MAKE_MODULE_FRAME(codeobj_0680c777b7beeafd23199c36958bc72c, module_fastapi$params);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0680c777b7beeafd23199c36958bc72c);
    assert(Py_REFCNT(frame_0680c777b7beeafd23199c36958bc72c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[35], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[37];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_fastapi$params;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[38];
        tmp_level_value_1 = mod_consts[39];
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_fastapi$params,
                mod_consts[40],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_fastapi$params,
                mod_consts[41],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[41]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_fastapi$params,
                mod_consts[42],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[42]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_fastapi$params,
                mod_consts[43],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[43]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_fastapi$params,
                mod_consts[44],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[44]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_fastapi$params,
                mod_consts[45],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[45]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_10);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[46];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_fastapi$params;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[47];
        tmp_level_value_2 = mod_consts[39];
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 4;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_fastapi$params,
                mod_consts[48],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[48]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_fastapi$params,
                mod_consts[49],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[49]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_13);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        tmp_assign_source_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_15 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
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


            exception_lineno = 7;

            goto try_except_handler_3;
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
        tmp_subscript_value_1 = mod_consts[39];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[51];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 7;
        tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[17];
        tmp_default_value_1 = mod_consts[54];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[17]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 7;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_fastapi$params$$$class__1_ParamTypes_7 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__1_ParamTypes_7, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__1_ParamTypes_7, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_5;
        }
        frame_abe226c10cd01009f0daebb346a861ea_2 = MAKE_CLASS_FRAME(tstate, codeobj_abe226c10cd01009f0daebb346a861ea, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_abe226c10cd01009f0daebb346a861ea_2);
        assert(Py_REFCNT(frame_abe226c10cd01009f0daebb346a861ea_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__1_ParamTypes_7, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__1_ParamTypes_7, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[60];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__1_ParamTypes_7, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__1_ParamTypes_7, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_abe226c10cd01009f0daebb346a861ea_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_abe226c10cd01009f0daebb346a861ea_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_abe226c10cd01009f0daebb346a861ea_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_abe226c10cd01009f0daebb346a861ea_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_abe226c10cd01009f0daebb346a861ea_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__1_ParamTypes_7, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[51];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_fastapi$params$$$class__1_ParamTypes_7;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 7;
            tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_fastapi$params$$$class__1_ParamTypes_7);
        locals_fastapi$params$$$class__1_ParamTypes_7 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__1_ParamTypes_7);
        locals_fastapi$params$$$class__1_ParamTypes_7 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 7;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_20);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        tmp_assign_source_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_23 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
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


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[39];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[50]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[63];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 14;
        tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[17];
        tmp_default_value_2 = mod_consts[54];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[17]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 14;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_28;
        outline_1_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_fastapi$params$$$class__2_Param_14 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_8;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[64], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_8;
        }
        frame_ed4756905595a8cacbbf5c8989fb41e4_3 = MAKE_CLASS_FRAME(tstate, codeobj_ed4756905595a8cacbbf5c8989fb41e4, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ed4756905595a8cacbbf5c8989fb41e4_3);
        assert(Py_REFCNT(frame_ed4756905595a8cacbbf5c8989fb41e4_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[51]);

            if (tmp_ass_subvalue_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_ass_subvalue_1 == NULL)) {
                        tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_ass_subvalue_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 15;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_ass_subvalue_1);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_1 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[64]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[64]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_1 = mod_consts[22];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_tuple_element_8 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[49]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 19;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_8);
            tmp_dict_key_1 = mod_consts[7];
            tmp_dict_value_1 = Py_None;
            tmp_kw_defaults_1 = _PyDict_NewPresized( 14 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[8];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[9];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[15];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[1];
            tmp_dict_value_1 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[49]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "c";
                        goto dict_build_exception_1;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto dict_build_exception_1;
                }
            }

            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[2];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[0];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[3];
            tmp_dict_value_1 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_kw_defaults_1);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_dict_key_2 = mod_consts[6];
            tmp_dict_value_2 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[41]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);
                        Py_DECREF(tmp_kw_defaults_1);

                        exception_lineno = 19;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 16 );
            {
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_15;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[7];
                tmp_expression_value_13 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 21;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[65]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_3);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[8];
                tmp_expression_value_14 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 22;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[65]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_4);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[9];
                tmp_expression_value_15 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[65]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[10];
                tmp_expression_value_16 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[66]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_6 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[11];
                tmp_expression_value_17 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[66]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_7 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[12];
                tmp_expression_value_18 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 26;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[66]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_8 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[13];
                tmp_expression_value_19 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[66]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_9 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[14];
                tmp_expression_value_20 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[67]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_10 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[15];
                tmp_expression_value_21 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[67]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_11 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[16];
                tmp_expression_value_22 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 30;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[65]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[1];
                tmp_dict_value_2 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[41]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 31;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[2];
                tmp_expression_value_23 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_24 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[43]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_23);

                            exception_lineno = 32;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_9 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[65]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[41]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_9);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_14);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_subscript_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_23);

                    exception_lineno = 32;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[0];
                tmp_expression_value_25 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[44]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[68]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_15 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[3];
                tmp_dict_value_2 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[68]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[69];
                tmp_dict_value_2 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[41]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_kw_defaults_1);
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__1___init__(tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[71];
            tmp_dict_value_3 = PyObject_GetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[65]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__2___repr__(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ed4756905595a8cacbbf5c8989fb41e4_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ed4756905595a8cacbbf5c8989fb41e4_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ed4756905595a8cacbbf5c8989fb41e4_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ed4756905595a8cacbbf5c8989fb41e4_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_ed4756905595a8cacbbf5c8989fb41e4_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__2_Param_14, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = mod_consts[63];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_fastapi$params$$$class__2_Param_14;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 14;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_29);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_28 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_fastapi$params$$$class__2_Param_14);
        locals_fastapi$params$$$class__2_Param_14 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__2_Param_14);
        locals_fastapi$params$$$class__2_Param_14 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 14;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_28);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_31 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_26 = tmp_class_creation_3__bases;
        tmp_subscript_value_16 = mod_consts[39];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_16, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_27 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_28 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[50]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_tuple_element_12 = mod_consts[74];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_12 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 60;
        tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_29 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
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
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_30 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[17];
        tmp_default_value_3 = mod_consts[54];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_31 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[17]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 60;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_35;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_36;
        outline_2_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_fastapi$params$$$class__3_Path_60 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_11;
        }
        frame_57e7c3b600e86225f87fb2d0edabb26a_4 = MAKE_CLASS_FRAME(tstate, codeobj_57e7c3b600e86225f87fb2d0edabb26a, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_57e7c3b600e86225f87fb2d0edabb26a_4);
        assert(Py_REFCNT(frame_57e7c3b600e86225f87fb2d0edabb26a_4) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_32;
            tmp_expression_value_32 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[51]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[60]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_defaults_2 = mod_consts[75];
            tmp_dict_key_4 = mod_consts[7];
            tmp_dict_value_4 = Py_None;
            tmp_kw_defaults_2 = _PyDict_NewPresized( 14 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[8];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[9];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[10];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[11];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[12];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[13];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[14];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[15];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[16];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[1];
            tmp_dict_value_4 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[49]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "c";
                        goto dict_build_exception_3;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto dict_build_exception_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[2];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[0];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[3];
            tmp_dict_value_4 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_kw_defaults_2);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            tmp_dict_key_5 = mod_consts[6];
            tmp_dict_value_5 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[41]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_2);

                        exception_lineno = 65;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 16 );
            {
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_29;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[7];
                tmp_expression_value_33 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[65]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[8];
                tmp_expression_value_34 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[65]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[9];
                tmp_expression_value_35 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_35 == NULL)) {
                            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 69;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_35);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[65]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[10];
                tmp_expression_value_36 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_20 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[66]);

                if (tmp_subscript_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_20 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_20);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[11];
                tmp_expression_value_37 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 71;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[66]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_21 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[12];
                tmp_expression_value_38 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 72;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_22 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[66]);

                if (tmp_subscript_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_22 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_22);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[13];
                tmp_expression_value_39 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 73;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[66]);

                if (tmp_subscript_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_23 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_23);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[14];
                tmp_expression_value_40 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 74;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[67]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_24 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[15];
                tmp_expression_value_41 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_41 == NULL)) {
                            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[67]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_25 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[16];
                tmp_expression_value_42 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_26 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[65]);

                if (tmp_subscript_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_26);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[1];
                tmp_dict_value_5 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[41]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[2];
                tmp_expression_value_43 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_expression_value_44 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[43]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_43);

                            exception_lineno = 78;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_14 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[65]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_28, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[41]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_14);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_28);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_subscript_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_subscript_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_43);

                    exception_lineno = 78;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[0];
                tmp_expression_value_45 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[44]);

                if (tmp_expression_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_45 == NULL)) {
                            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 79;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_45);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_29 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[68]);

                if (tmp_subscript_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_29 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_29);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[3];
                tmp_dict_value_5 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[68]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_5 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[69];
                tmp_dict_value_5 = PyObject_GetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[41]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_kw_defaults_2);
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            Py_INCREF(tmp_defaults_2);

            tmp_closure_2[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__3___init__(tmp_defaults_2, tmp_kw_defaults_2, tmp_annotations_3, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_57e7c3b600e86225f87fb2d0edabb26a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_57e7c3b600e86225f87fb2d0edabb26a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_57e7c3b600e86225f87fb2d0edabb26a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_57e7c3b600e86225f87fb2d0edabb26a_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_57e7c3b600e86225f87fb2d0edabb26a_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__3_Path_60, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_11;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_15 = mod_consts[74];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_15 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_fastapi$params$$$class__3_Path_60;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 60;
            tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_37);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_36 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_fastapi$params$$$class__3_Path_60);
        locals_fastapi$params$$$class__3_Path_60 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__3_Path_60);
        locals_fastapi$params$$$class__3_Path_60 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 60;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_36);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_16;
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        tmp_assign_source_38 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_16);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_39 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_46 = tmp_class_creation_4__bases;
        tmp_subscript_value_30 = mod_consts[39];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_30, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_47;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_47 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_48 = tmp_class_creation_4__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[50]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        tmp_tuple_element_17 = mod_consts[77];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_17 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 105;
        tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_49 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_49, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
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
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_50 = tmp_class_creation_4__metaclass;
        tmp_name_value_6 = mod_consts[17];
        tmp_default_value_4 = mod_consts[54];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_50, tmp_name_value_6, tmp_default_value_4);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_51;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_51 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_51 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[17]);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 105;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_43;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_44;
        outline_3_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_fastapi$params$$$class__4_Query_105 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5 = MAKE_CLASS_FRAME(tstate, codeobj_7a0f5a44fb2be4b65bf192c15fb8e0b6, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5);
        assert(Py_REFCNT(frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_52;
            tmp_expression_value_52 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[51]);

            if (tmp_expression_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_52);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[58]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_tuple_element_19 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[49]);

            if (tmp_tuple_element_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_19 == NULL)) {
                        tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_tuple_element_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_tuple_element_19);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_defaults_3 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_19);
            tmp_dict_key_6 = mod_consts[7];
            tmp_dict_value_6 = Py_None;
            tmp_kw_defaults_3 = _PyDict_NewPresized( 14 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[8];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[9];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[10];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[11];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[12];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[13];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[14];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[15];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[16];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[1];
            tmp_dict_value_6 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[49]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "c";
                        goto dict_build_exception_5;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto dict_build_exception_5;
                }
            }

            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[2];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[0];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[3];
            tmp_dict_value_6 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_defaults_3);
            Py_DECREF(tmp_kw_defaults_3);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            tmp_dict_key_7 = mod_consts[6];
            tmp_dict_value_7 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[41]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_3);
                        Py_DECREF(tmp_kw_defaults_3);

                        exception_lineno = 110;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 16 );
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_54;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_expression_value_55;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_subscript_value_34;
                PyObject *tmp_expression_value_57;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_expression_value_58;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_expression_value_59;
                PyObject *tmp_subscript_value_37;
                PyObject *tmp_expression_value_60;
                PyObject *tmp_subscript_value_38;
                PyObject *tmp_expression_value_61;
                PyObject *tmp_subscript_value_39;
                PyObject *tmp_expression_value_62;
                PyObject *tmp_subscript_value_40;
                PyObject *tmp_expression_value_63;
                PyObject *tmp_subscript_value_41;
                PyObject *tmp_expression_value_64;
                PyObject *tmp_subscript_value_42;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_expression_value_65;
                PyObject *tmp_subscript_value_43;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[7];
                tmp_expression_value_53 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 112;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_31 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[65]);

                if (tmp_subscript_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_31);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[8];
                tmp_expression_value_54 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_54 == NULL)) {
                            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_54);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_32 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[65]);

                if (tmp_subscript_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_32 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_32);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_54);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[9];
                tmp_expression_value_55 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_55 == NULL)) {
                            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_55 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_55);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_33 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[65]);

                if (tmp_subscript_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_33 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_33);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_55);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[10];
                tmp_expression_value_56 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_56 == NULL)) {
                            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_56 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_56);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_34 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[66]);

                if (tmp_subscript_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_34 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_34);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_56);
                Py_DECREF(tmp_subscript_value_34);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[11];
                tmp_expression_value_57 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_57 == NULL)) {
                            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_57 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_57);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_35 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[66]);

                if (tmp_subscript_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_35 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_35);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_57);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[12];
                tmp_expression_value_58 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_58 == NULL)) {
                            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_58 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 117;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_58);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_36 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[66]);

                if (tmp_subscript_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_36 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_36);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_36);
                Py_DECREF(tmp_expression_value_58);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[13];
                tmp_expression_value_59 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_59 == NULL)) {
                            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_59 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 118;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_59);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_37 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[66]);

                if (tmp_subscript_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_37 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_37);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_59);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[14];
                tmp_expression_value_60 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_60 == NULL)) {
                            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 119;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_60);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_38 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[67]);

                if (tmp_subscript_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_38 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_38);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_38);
                Py_DECREF(tmp_expression_value_60);
                Py_DECREF(tmp_subscript_value_38);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 119;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[15];
                tmp_expression_value_61 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_61 == NULL)) {
                            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_61);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_39 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[67]);

                if (tmp_subscript_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_39 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_39);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_39);
                Py_DECREF(tmp_expression_value_61);
                Py_DECREF(tmp_subscript_value_39);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 120;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[16];
                tmp_expression_value_62 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_62 == NULL)) {
                            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 121;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_62);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_40 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[65]);

                if (tmp_subscript_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_40 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_40);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_40);
                Py_DECREF(tmp_expression_value_62);
                Py_DECREF(tmp_subscript_value_40);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 121;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[1];
                tmp_dict_value_7 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[41]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_7 == NULL)) {
                            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[2];
                tmp_expression_value_63 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_63 == NULL)) {
                            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_63 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_63);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_64 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[43]);

                if (tmp_expression_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_64 == NULL)) {
                            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                        }

                        if (tmp_expression_value_64 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_63);

                            exception_lineno = 123;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_64);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_20 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[65]);

                if (tmp_tuple_element_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_20);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_42, 0, tmp_tuple_element_20);
                tmp_tuple_element_20 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[41]);

                if (tmp_tuple_element_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_20 == NULL)) {
                            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_20);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_42, 1, tmp_tuple_element_20);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_expression_value_63);
                Py_DECREF(tmp_expression_value_64);
                Py_DECREF(tmp_subscript_value_42);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_subscript_value_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_42);
                Py_DECREF(tmp_expression_value_64);
                Py_DECREF(tmp_subscript_value_42);
                if (tmp_subscript_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_63);

                    exception_lineno = 123;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_41);
                Py_DECREF(tmp_expression_value_63);
                Py_DECREF(tmp_subscript_value_41);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[0];
                tmp_expression_value_65 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[44]);

                if (tmp_expression_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_65 == NULL)) {
                            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_65 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_65);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_43 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[68]);

                if (tmp_subscript_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_43 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_43);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_43);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_43);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[3];
                tmp_dict_value_7 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[68]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_7 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[69];
                tmp_dict_value_7 = PyObject_GetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[41]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_7 == NULL)) {
                            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 126;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_defaults_3);
            Py_DECREF(tmp_kw_defaults_3);
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;

            tmp_closure_3[0] = outline_3_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__4___init__(tmp_defaults_3, tmp_kw_defaults_3, tmp_annotations_4, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_7a0f5a44fb2be4b65bf192c15fb8e0b6_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__4_Query_105, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_14;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_21 = mod_consts[77];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_21 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_fastapi$params$$$class__4_Query_105;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 105;
            tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto try_except_handler_14;
            }
            assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
            PyCell_SET(outline_3_var___class__, tmp_assign_source_45);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
        tmp_assign_source_44 = Nuitka_Cell_GET(outline_3_var___class__);
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_fastapi$params$$$class__4_Query_105);
        locals_fastapi$params$$$class__4_Query_105 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__4_Query_105);
        locals_fastapi$params$$$class__4_Query_105 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 105;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_44);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
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
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_22;
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        tmp_assign_source_46 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_22);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_47 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_44;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_66 = tmp_class_creation_5__bases;
        tmp_subscript_value_44 = mod_consts[39];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_66, tmp_subscript_value_44, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_67;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_67 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_67, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_68 = tmp_class_creation_5__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[50]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        tmp_tuple_element_23 = mod_consts[79];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_23 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 148;
        tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_69 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
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
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_70 = tmp_class_creation_5__metaclass;
        tmp_name_value_7 = mod_consts[17];
        tmp_default_value_5 = mod_consts[54];
        tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_70, tmp_name_value_7, tmp_default_value_5);
        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_71;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_71 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_71 == NULL));
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[17]);
            Py_DECREF(tmp_expression_value_71);
            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 148;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_51;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_52;
        outline_4_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_fastapi$params$$$class__5_Header_148 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_17;
        }
        frame_bcf6b849865ade0ae1493f89d2ec49c9_6 = MAKE_CLASS_FRAME(tstate, codeobj_bcf6b849865ade0ae1493f89d2ec49c9, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bcf6b849865ade0ae1493f89d2ec49c9_6);
        assert(Py_REFCNT(frame_bcf6b849865ade0ae1493f89d2ec49c9_6) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_72;
            tmp_expression_value_72 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[51]);

            if (tmp_expression_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_expression_value_72 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_72);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[59]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kw_defaults_4;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_tuple_element_25 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[49]);

            if (tmp_tuple_element_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_25 == NULL)) {
                        tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_tuple_element_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 153;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_tuple_element_25);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_defaults_4 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_4, 0, tmp_tuple_element_25);
            tmp_dict_key_8 = mod_consts[7];
            tmp_dict_value_8 = Py_None;
            tmp_kw_defaults_4 = _PyDict_NewPresized( 15 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[23];
            tmp_dict_value_8 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[8];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[9];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[10];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[11];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[12];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[13];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[14];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[15];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[16];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[1];
            tmp_dict_value_8 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[49]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "c";
                        goto dict_build_exception_7;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto dict_build_exception_7;
                }
            }

            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[2];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[0];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[3];
            tmp_dict_value_8 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_defaults_4);
            Py_DECREF(tmp_kw_defaults_4);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            tmp_dict_key_9 = mod_consts[6];
            tmp_dict_value_9 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[41]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_4);
                        Py_DECREF(tmp_kw_defaults_4);

                        exception_lineno = 153;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 17 );
            {
                PyObject *tmp_expression_value_73;
                PyObject *tmp_subscript_value_45;
                PyObject *tmp_expression_value_74;
                PyObject *tmp_subscript_value_46;
                PyObject *tmp_expression_value_75;
                PyObject *tmp_subscript_value_47;
                PyObject *tmp_expression_value_76;
                PyObject *tmp_subscript_value_48;
                PyObject *tmp_expression_value_77;
                PyObject *tmp_subscript_value_49;
                PyObject *tmp_expression_value_78;
                PyObject *tmp_subscript_value_50;
                PyObject *tmp_expression_value_79;
                PyObject *tmp_subscript_value_51;
                PyObject *tmp_expression_value_80;
                PyObject *tmp_subscript_value_52;
                PyObject *tmp_expression_value_81;
                PyObject *tmp_subscript_value_53;
                PyObject *tmp_expression_value_82;
                PyObject *tmp_subscript_value_54;
                PyObject *tmp_expression_value_83;
                PyObject *tmp_subscript_value_55;
                PyObject *tmp_expression_value_84;
                PyObject *tmp_subscript_value_56;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_expression_value_85;
                PyObject *tmp_subscript_value_57;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[7];
                tmp_expression_value_73 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_73 == NULL)) {
                            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_73 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 155;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_73);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_45 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[65]);

                if (tmp_subscript_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_45 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_45);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_45);
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_subscript_value_45);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[23];
                tmp_dict_value_9 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[68]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_9 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[8];
                tmp_expression_value_74 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_74 == NULL)) {
                            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_74);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_46 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[65]);

                if (tmp_subscript_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_46 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_46);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_46);
                Py_DECREF(tmp_expression_value_74);
                Py_DECREF(tmp_subscript_value_46);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[9];
                tmp_expression_value_75 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_75 == NULL)) {
                            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_75 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_75);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_47 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[65]);

                if (tmp_subscript_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_47 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_47);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_47);
                Py_DECREF(tmp_expression_value_75);
                Py_DECREF(tmp_subscript_value_47);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[10];
                tmp_expression_value_76 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_76 == NULL)) {
                            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_76 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 159;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_76);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_48 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[66]);

                if (tmp_subscript_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_48 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_48);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_48);
                Py_DECREF(tmp_expression_value_76);
                Py_DECREF(tmp_subscript_value_48);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[11];
                tmp_expression_value_77 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_77 == NULL)) {
                            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_77 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 160;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_77);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_49 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[66]);

                if (tmp_subscript_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_49 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_49);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_49);
                Py_DECREF(tmp_expression_value_77);
                Py_DECREF(tmp_subscript_value_49);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[12];
                tmp_expression_value_78 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_78 == NULL)) {
                            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_78 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 161;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_78);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_50 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[66]);

                if (tmp_subscript_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_50 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_50);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_50);
                Py_DECREF(tmp_expression_value_78);
                Py_DECREF(tmp_subscript_value_50);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[13];
                tmp_expression_value_79 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_79 == NULL)) {
                            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_79 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 162;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_79);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_51 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[66]);

                if (tmp_subscript_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_51 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_51);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_51);
                Py_DECREF(tmp_expression_value_79);
                Py_DECREF(tmp_subscript_value_51);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[14];
                tmp_expression_value_80 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_80 == NULL)) {
                            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_80 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 163;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_80);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_52 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[67]);

                if (tmp_subscript_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_52 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_52);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_52);
                Py_DECREF(tmp_expression_value_80);
                Py_DECREF(tmp_subscript_value_52);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[15];
                tmp_expression_value_81 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_81 == NULL)) {
                            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_81 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 164;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_81);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_53 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[67]);

                if (tmp_subscript_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_53 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_53);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_53);
                Py_DECREF(tmp_expression_value_81);
                Py_DECREF(tmp_subscript_value_53);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[16];
                tmp_expression_value_82 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_82 == NULL)) {
                            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_82 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_82);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_54 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[65]);

                if (tmp_subscript_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_54 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_54);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_54);
                Py_DECREF(tmp_expression_value_82);
                Py_DECREF(tmp_subscript_value_54);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[1];
                tmp_dict_value_9 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[41]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_9 == NULL)) {
                            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[2];
                tmp_expression_value_83 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_83 == NULL)) {
                            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_83 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 167;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_83);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_expression_value_84 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[43]);

                if (tmp_expression_value_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_84 == NULL)) {
                            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                        }

                        if (tmp_expression_value_84 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_83);

                            exception_lineno = 167;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_84);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_tuple_element_26 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[65]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_56 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_56, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[41]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_26 == NULL)) {
                            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 167;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_56, 1, tmp_tuple_element_26);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_expression_value_83);
                Py_DECREF(tmp_expression_value_84);
                Py_DECREF(tmp_subscript_value_56);
                goto dict_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_subscript_value_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_56);
                Py_DECREF(tmp_expression_value_84);
                Py_DECREF(tmp_subscript_value_56);
                if (tmp_subscript_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_83);

                    exception_lineno = 167;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_55);
                Py_DECREF(tmp_expression_value_83);
                Py_DECREF(tmp_subscript_value_55);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[0];
                tmp_expression_value_85 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[44]);

                if (tmp_expression_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_85 == NULL)) {
                            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_85 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_85);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_57 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[68]);

                if (tmp_subscript_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_57 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_57);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_57);
                Py_DECREF(tmp_expression_value_85);
                Py_DECREF(tmp_subscript_value_57);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[3];
                tmp_dict_value_9 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[68]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_9 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[69];
                tmp_dict_value_9 = PyObject_GetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[41]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_9 == NULL)) {
                            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 170;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_defaults_4);
            Py_DECREF(tmp_kw_defaults_4);
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;

            tmp_closure_4[0] = outline_4_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__5___init__(tmp_defaults_4, tmp_kw_defaults_4, tmp_annotations_5, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bcf6b849865ade0ae1493f89d2ec49c9_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bcf6b849865ade0ae1493f89d2ec49c9_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bcf6b849865ade0ae1493f89d2ec49c9_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bcf6b849865ade0ae1493f89d2ec49c9_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_bcf6b849865ade0ae1493f89d2ec49c9_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__5_Header_148, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_17;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_27 = mod_consts[79];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_27 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_fastapi$params$$$class__5_Header_148;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 148;
            tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto try_except_handler_17;
            }
            assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
            PyCell_SET(outline_4_var___class__, tmp_assign_source_53);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
        tmp_assign_source_52 = Nuitka_Cell_GET(outline_4_var___class__);
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_fastapi$params$$$class__5_Header_148);
        locals_fastapi$params$$$class__5_Header_148 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__5_Header_148);
        locals_fastapi$params$$$class__5_Header_148 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 148;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_52);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
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
        PyObject *tmp_assign_source_54;
        PyObject *tmp_tuple_element_28;
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        tmp_assign_source_54 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_28);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_55 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_58;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_86 = tmp_class_creation_6__bases;
        tmp_subscript_value_58 = mod_consts[39];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_86, tmp_subscript_value_58, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_87;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_87 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_87, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_88 = tmp_class_creation_6__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[50]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        tmp_tuple_element_29 = mod_consts[81];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_29 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 193;
        tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_89;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_89 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_89, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
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
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_90 = tmp_class_creation_6__metaclass;
        tmp_name_value_8 = mod_consts[17];
        tmp_default_value_6 = mod_consts[54];
        tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_90, tmp_name_value_8, tmp_default_value_6);
        if (tmp_tuple_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_91;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_91 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_91 == NULL));
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[17]);
            Py_DECREF(tmp_expression_value_91);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 193;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_59;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_60;
        outline_5_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_fastapi$params$$$class__6_Cookie_193 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_20;
        }
        frame_07310af2ce8926044aa6fc2da559a22c_7 = MAKE_CLASS_FRAME(tstate, codeobj_07310af2ce8926044aa6fc2da559a22c, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_07310af2ce8926044aa6fc2da559a22c_7);
        assert(Py_REFCNT(frame_07310af2ce8926044aa6fc2da559a22c_7) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_92;
            tmp_expression_value_92 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[51]);

            if (tmp_expression_value_92 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_92 == NULL)) {
                        tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                    }

                    if (tmp_expression_value_92 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_92);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[61]);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kw_defaults_5;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            struct Nuitka_CellObject *tmp_closure_5[1];
            tmp_tuple_element_31 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[49]);

            if (tmp_tuple_element_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_31 == NULL)) {
                        tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_tuple_element_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 198;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_tuple_element_31);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_defaults_5 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_5, 0, tmp_tuple_element_31);
            tmp_dict_key_10 = mod_consts[7];
            tmp_dict_value_10 = Py_None;
            tmp_kw_defaults_5 = _PyDict_NewPresized( 14 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[8];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[9];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[10];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[11];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[12];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[13];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[14];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[15];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[16];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[1];
            tmp_dict_value_10 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[49]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "c";
                        goto dict_build_exception_9;
                    }
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto dict_build_exception_9;
                }
            }

            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[2];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[0];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[3];
            tmp_dict_value_10 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_defaults_5);
            Py_DECREF(tmp_kw_defaults_5);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            tmp_dict_key_11 = mod_consts[6];
            tmp_dict_value_11 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[41]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_5);
                        Py_DECREF(tmp_kw_defaults_5);

                        exception_lineno = 198;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 16 );
            {
                PyObject *tmp_expression_value_93;
                PyObject *tmp_subscript_value_59;
                PyObject *tmp_expression_value_94;
                PyObject *tmp_subscript_value_60;
                PyObject *tmp_expression_value_95;
                PyObject *tmp_subscript_value_61;
                PyObject *tmp_expression_value_96;
                PyObject *tmp_subscript_value_62;
                PyObject *tmp_expression_value_97;
                PyObject *tmp_subscript_value_63;
                PyObject *tmp_expression_value_98;
                PyObject *tmp_subscript_value_64;
                PyObject *tmp_expression_value_99;
                PyObject *tmp_subscript_value_65;
                PyObject *tmp_expression_value_100;
                PyObject *tmp_subscript_value_66;
                PyObject *tmp_expression_value_101;
                PyObject *tmp_subscript_value_67;
                PyObject *tmp_expression_value_102;
                PyObject *tmp_subscript_value_68;
                PyObject *tmp_expression_value_103;
                PyObject *tmp_subscript_value_69;
                PyObject *tmp_expression_value_104;
                PyObject *tmp_subscript_value_70;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_expression_value_105;
                PyObject *tmp_subscript_value_71;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[7];
                tmp_expression_value_93 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_93 == NULL)) {
                            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_93 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 200;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_93);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_59 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[65]);

                if (tmp_subscript_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_59 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_59);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_59);
                Py_DECREF(tmp_expression_value_93);
                Py_DECREF(tmp_subscript_value_59);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 200;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[8];
                tmp_expression_value_94 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_94 == NULL)) {
                            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_94 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 201;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_94);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_60 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[65]);

                if (tmp_subscript_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_60 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_60);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_60);
                Py_DECREF(tmp_expression_value_94);
                Py_DECREF(tmp_subscript_value_60);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[9];
                tmp_expression_value_95 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_95 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_95 == NULL)) {
                            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_95 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 202;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_95);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_61 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[65]);

                if (tmp_subscript_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_61 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_61);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_61);
                Py_DECREF(tmp_expression_value_95);
                Py_DECREF(tmp_subscript_value_61);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 202;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[10];
                tmp_expression_value_96 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_96 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_96 == NULL)) {
                            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_96 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 203;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_96);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_62 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[66]);

                if (tmp_subscript_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_62 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_62);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_62);
                Py_DECREF(tmp_expression_value_96);
                Py_DECREF(tmp_subscript_value_62);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 203;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[11];
                tmp_expression_value_97 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_97 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_97 == NULL)) {
                            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_97 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 204;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_97);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_63 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[66]);

                if (tmp_subscript_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_63 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_63);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_97, tmp_subscript_value_63);
                Py_DECREF(tmp_expression_value_97);
                Py_DECREF(tmp_subscript_value_63);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[12];
                tmp_expression_value_98 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_98 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_98 == NULL)) {
                            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_98 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_98);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_64 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[66]);

                if (tmp_subscript_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_64 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_64);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_98, tmp_subscript_value_64);
                Py_DECREF(tmp_expression_value_98);
                Py_DECREF(tmp_subscript_value_64);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[13];
                tmp_expression_value_99 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_99 == NULL)) {
                            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_99 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 206;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_99);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_65 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[66]);

                if (tmp_subscript_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_65 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_65);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_99, tmp_subscript_value_65);
                Py_DECREF(tmp_expression_value_99);
                Py_DECREF(tmp_subscript_value_65);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[14];
                tmp_expression_value_100 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_100 == NULL)) {
                            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_100 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 207;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_100);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_66 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[67]);

                if (tmp_subscript_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_66 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_66);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_100, tmp_subscript_value_66);
                Py_DECREF(tmp_expression_value_100);
                Py_DECREF(tmp_subscript_value_66);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[15];
                tmp_expression_value_101 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_101 == NULL)) {
                            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_101 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_101);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_67 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[67]);

                if (tmp_subscript_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_67 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_67);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_101, tmp_subscript_value_67);
                Py_DECREF(tmp_expression_value_101);
                Py_DECREF(tmp_subscript_value_67);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[16];
                tmp_expression_value_102 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_102 == NULL)) {
                            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_102 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 209;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_102);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_68 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[65]);

                if (tmp_subscript_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_68 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_68);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_102, tmp_subscript_value_68);
                Py_DECREF(tmp_expression_value_102);
                Py_DECREF(tmp_subscript_value_68);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[1];
                tmp_dict_value_11 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[41]);

                if (tmp_dict_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_11 == NULL)) {
                            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 210;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_dict_value_11);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[2];
                tmp_expression_value_103 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_103 == NULL)) {
                            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_103 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 211;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_103);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_expression_value_104 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[43]);

                if (tmp_expression_value_104 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_104 == NULL)) {
                            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                        }

                        if (tmp_expression_value_104 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_103);

                            exception_lineno = 211;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_104);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_tuple_element_32 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[65]);

                if (tmp_tuple_element_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_32 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_32);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_70 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_70, 0, tmp_tuple_element_32);
                tmp_tuple_element_32 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[41]);

                if (tmp_tuple_element_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_32 == NULL)) {
                            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 211;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_32);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_70, 1, tmp_tuple_element_32);
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_expression_value_103);
                Py_DECREF(tmp_expression_value_104);
                Py_DECREF(tmp_subscript_value_70);
                goto dict_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_subscript_value_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_104, tmp_subscript_value_70);
                Py_DECREF(tmp_expression_value_104);
                Py_DECREF(tmp_subscript_value_70);
                if (tmp_subscript_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_103);

                    exception_lineno = 211;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_103, tmp_subscript_value_69);
                Py_DECREF(tmp_expression_value_103);
                Py_DECREF(tmp_subscript_value_69);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[0];
                tmp_expression_value_105 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[44]);

                if (tmp_expression_value_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_105 == NULL)) {
                            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_105 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 212;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_105);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_71 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[68]);

                if (tmp_subscript_value_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_71 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_71);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_105, tmp_subscript_value_71);
                Py_DECREF(tmp_expression_value_105);
                Py_DECREF(tmp_subscript_value_71);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_2 = "c";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[3];
                tmp_dict_value_11 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[68]);

                if (tmp_dict_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_11);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[69];
                tmp_dict_value_11 = PyObject_GetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[41]);

                if (tmp_dict_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_11 == NULL)) {
                            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 214;
                            type_description_2 = "c";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_dict_value_11);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_defaults_5);
            Py_DECREF(tmp_kw_defaults_5);
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;

            tmp_closure_5[0] = outline_5_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__6___init__(tmp_defaults_5, tmp_kw_defaults_5, tmp_annotations_6, tmp_closure_5);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_07310af2ce8926044aa6fc2da559a22c_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_07310af2ce8926044aa6fc2da559a22c_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_07310af2ce8926044aa6fc2da559a22c_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_07310af2ce8926044aa6fc2da559a22c_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_07310af2ce8926044aa6fc2da559a22c_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_20;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__6_Cookie_193, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_20;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_12 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_33 = mod_consts[81];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_33 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = locals_fastapi$params$$$class__6_Cookie_193;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 193;
            tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto try_except_handler_20;
            }
            assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
            PyCell_SET(outline_5_var___class__, tmp_assign_source_61);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
        tmp_assign_source_60 = Nuitka_Cell_GET(outline_5_var___class__);
        Py_INCREF(tmp_assign_source_60);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_fastapi$params$$$class__6_Cookie_193);
        locals_fastapi$params$$$class__6_Cookie_193 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__6_Cookie_193);
        locals_fastapi$params$$$class__6_Cookie_193 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 193;
        goto try_except_handler_18;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_60);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_tuple_element_34;
        tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_34 == NULL)) {
            tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_tuple_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        tmp_assign_source_62 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_62, 0, tmp_tuple_element_34);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_63 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_subscript_value_72;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_106 = tmp_class_creation_7__bases;
        tmp_subscript_value_72 = mod_consts[39];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_106, tmp_subscript_value_72, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_65 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_107;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_107 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_107, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_108 = tmp_class_creation_7__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[50]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        tmp_tuple_element_35 = mod_consts[83];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_35);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_35 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_35);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 236;
        tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_109;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_109 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_109, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_110 = tmp_class_creation_7__metaclass;
        tmp_name_value_9 = mod_consts[17];
        tmp_default_value_7 = mod_consts[54];
        tmp_tuple_element_36 = BUILTIN_GETATTR(tstate, tmp_expression_value_110, tmp_name_value_9, tmp_default_value_7);
        if (tmp_tuple_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_111;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_111 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_111 == NULL));
            tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[17]);
            Py_DECREF(tmp_expression_value_111);
            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 236;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_67;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_68;
        outline_6_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_fastapi$params$$$class__7_Body_236 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_23;
        }
        frame_c9607a06059d20d9952d91c225ee3850_8 = MAKE_CLASS_FRAME(tstate, codeobj_c9607a06059d20d9952d91c225ee3850, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c9607a06059d20d9952d91c225ee3850_8);
        assert(Py_REFCNT(frame_c9607a06059d20d9952d91c225ee3850_8) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kw_defaults_6;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            struct Nuitka_CellObject *tmp_closure_6[1];
            tmp_tuple_element_37 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[49]);

            if (tmp_tuple_element_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_37 == NULL)) {
                        tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_tuple_element_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 239;
                        type_description_2 = "c";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_tuple_element_37);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_defaults_6 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_6, 0, tmp_tuple_element_37);
            tmp_dict_key_12 = mod_consts[24];
            tmp_dict_value_12 = Py_False;
            tmp_kw_defaults_6 = _PyDict_NewPresized( 14 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[25];
            tmp_dict_value_12 = mod_consts[84];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[7];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[8];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[9];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[10];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[11];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[12];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[13];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[14];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[15];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[16];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[1];
            tmp_dict_value_12 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[49]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 253;
                        type_description_2 = "c";
                        goto dict_build_exception_11;
                    }
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto dict_build_exception_11;
                }
            }

            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[2];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_defaults_6);
            Py_DECREF(tmp_kw_defaults_6);
            goto frame_exception_exit_8;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;
            tmp_dict_key_13 = mod_consts[6];
            tmp_dict_value_13 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[41]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_6);
                        Py_DECREF(tmp_kw_defaults_6);

                        exception_lineno = 239;
                        type_description_2 = "c";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 16 );
            {
                PyObject *tmp_expression_value_112;
                PyObject *tmp_subscript_value_73;
                PyObject *tmp_expression_value_113;
                PyObject *tmp_subscript_value_74;
                PyObject *tmp_expression_value_114;
                PyObject *tmp_subscript_value_75;
                PyObject *tmp_expression_value_115;
                PyObject *tmp_subscript_value_76;
                PyObject *tmp_expression_value_116;
                PyObject *tmp_subscript_value_77;
                PyObject *tmp_expression_value_117;
                PyObject *tmp_subscript_value_78;
                PyObject *tmp_expression_value_118;
                PyObject *tmp_subscript_value_79;
                PyObject *tmp_expression_value_119;
                PyObject *tmp_subscript_value_80;
                PyObject *tmp_expression_value_120;
                PyObject *tmp_subscript_value_81;
                PyObject *tmp_expression_value_121;
                PyObject *tmp_subscript_value_82;
                PyObject *tmp_expression_value_122;
                PyObject *tmp_subscript_value_83;
                PyObject *tmp_expression_value_123;
                PyObject *tmp_subscript_value_84;
                PyObject *tmp_tuple_element_38;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[24];
                tmp_dict_value_13 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[68]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[25];
                tmp_dict_value_13 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[65]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[7];
                tmp_expression_value_112 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_112 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_112 == NULL)) {
                            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_112 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_112);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_73 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[65]);

                if (tmp_subscript_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_73 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_73);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_112, tmp_subscript_value_73);
                Py_DECREF(tmp_expression_value_112);
                Py_DECREF(tmp_subscript_value_73);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[8];
                tmp_expression_value_113 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_113 == NULL)) {
                            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_113 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 244;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_113);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_74 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[65]);

                if (tmp_subscript_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_74 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_74);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_113, tmp_subscript_value_74);
                Py_DECREF(tmp_expression_value_113);
                Py_DECREF(tmp_subscript_value_74);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[9];
                tmp_expression_value_114 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_114 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_114 == NULL)) {
                            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_114 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 245;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_114);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_75 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[65]);

                if (tmp_subscript_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_75 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_75);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_114, tmp_subscript_value_75);
                Py_DECREF(tmp_expression_value_114);
                Py_DECREF(tmp_subscript_value_75);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[10];
                tmp_expression_value_115 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_115 == NULL)) {
                            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_115 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 246;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_115);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_76 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[66]);

                if (tmp_subscript_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_76 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_76);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_115, tmp_subscript_value_76);
                Py_DECREF(tmp_expression_value_115);
                Py_DECREF(tmp_subscript_value_76);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[11];
                tmp_expression_value_116 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_116 == NULL)) {
                            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_116 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 247;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_116);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_77 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[66]);

                if (tmp_subscript_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_77 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_77);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_116, tmp_subscript_value_77);
                Py_DECREF(tmp_expression_value_116);
                Py_DECREF(tmp_subscript_value_77);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[12];
                tmp_expression_value_117 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_117 == NULL)) {
                            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_117 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 248;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_117);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_78 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[66]);

                if (tmp_subscript_value_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_78 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_78);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_117, tmp_subscript_value_78);
                Py_DECREF(tmp_expression_value_117);
                Py_DECREF(tmp_subscript_value_78);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 248;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[13];
                tmp_expression_value_118 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_118 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_118 == NULL)) {
                            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_118 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 249;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_118);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_79 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[66]);

                if (tmp_subscript_value_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_79 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_79);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_118, tmp_subscript_value_79);
                Py_DECREF(tmp_expression_value_118);
                Py_DECREF(tmp_subscript_value_79);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[14];
                tmp_expression_value_119 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_119 == NULL)) {
                            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_119 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 250;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_119);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_80 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[67]);

                if (tmp_subscript_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_80 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_80);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_119, tmp_subscript_value_80);
                Py_DECREF(tmp_expression_value_119);
                Py_DECREF(tmp_subscript_value_80);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[15];
                tmp_expression_value_120 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_120 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_120 == NULL)) {
                            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_120 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 251;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_120);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_81 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[67]);

                if (tmp_subscript_value_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_81 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_81);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_120, tmp_subscript_value_81);
                Py_DECREF(tmp_expression_value_120);
                Py_DECREF(tmp_subscript_value_81);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[16];
                tmp_expression_value_121 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_121 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_121 == NULL)) {
                            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_121 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 252;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_121);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_82 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[65]);

                if (tmp_subscript_value_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_82 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_82);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_121, tmp_subscript_value_82);
                Py_DECREF(tmp_expression_value_121);
                Py_DECREF(tmp_subscript_value_82);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[1];
                tmp_dict_value_13 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[41]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_13 == NULL)) {
                            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 253;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[2];
                tmp_expression_value_122 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[44]);

                if (tmp_expression_value_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_122 == NULL)) {
                            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_122 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 254;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_122);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_expression_value_123 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[43]);

                if (tmp_expression_value_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_123 == NULL)) {
                            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                        }

                        if (tmp_expression_value_123 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_122);

                            exception_lineno = 254;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_123);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_tuple_element_38 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[65]);

                if (tmp_tuple_element_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_38 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_38);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_84 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_84, 0, tmp_tuple_element_38);
                tmp_tuple_element_38 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[41]);

                if (tmp_tuple_element_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_38 == NULL)) {
                            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 254;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_38);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_84, 1, tmp_tuple_element_38);
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_expression_value_122);
                Py_DECREF(tmp_expression_value_123);
                Py_DECREF(tmp_subscript_value_84);
                goto dict_build_exception_12;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_subscript_value_83 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_123, tmp_subscript_value_84);
                Py_DECREF(tmp_expression_value_123);
                Py_DECREF(tmp_subscript_value_84);
                if (tmp_subscript_value_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_122);

                    exception_lineno = 254;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_122, tmp_subscript_value_83);
                Py_DECREF(tmp_expression_value_122);
                Py_DECREF(tmp_subscript_value_83);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 254;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[69];
                tmp_dict_value_13 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[41]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_13 == NULL)) {
                            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_defaults_6);
            Py_DECREF(tmp_kw_defaults_6);
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_8;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;

            tmp_closure_6[0] = outline_6_var___class__;
            Py_INCREF(tmp_closure_6[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__7___init__(tmp_defaults_6, tmp_kw_defaults_6, tmp_annotations_7, tmp_closure_6);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_dict_key_14 = mod_consts[71];
            tmp_dict_value_14 = PyObject_GetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[65]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_14 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__8___repr__(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c9607a06059d20d9952d91c225ee3850_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c9607a06059d20d9952d91c225ee3850_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c9607a06059d20d9952d91c225ee3850_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c9607a06059d20d9952d91c225ee3850_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_c9607a06059d20d9952d91c225ee3850_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_23;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__7_Body_236, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_23;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_14 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_39 = mod_consts[83];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_39 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_fastapi$params$$$class__7_Body_236;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 236;
            tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto try_except_handler_23;
            }
            assert(Nuitka_Cell_GET(outline_6_var___class__) == NULL);
            PyCell_SET(outline_6_var___class__, tmp_assign_source_69);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_6_var___class__));
        tmp_assign_source_68 = Nuitka_Cell_GET(outline_6_var___class__);
        Py_INCREF(tmp_assign_source_68);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_fastapi$params$$$class__7_Body_236);
        locals_fastapi$params$$$class__7_Body_236 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__7_Body_236);
        locals_fastapi$params$$$class__7_Body_236 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 236;
        goto try_except_handler_21;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_68);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_tuple_element_40;
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_tuple_element_40 == NULL)) {
            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_tuple_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        tmp_assign_source_70 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_70, 0, tmp_tuple_element_40);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_71 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_subscript_value_85;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_124 = tmp_class_creation_8__bases;
        tmp_subscript_value_85 = mod_consts[39];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_124, tmp_subscript_value_85, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_73 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_125;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_125 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_125, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_126 = tmp_class_creation_8__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[50]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        tmp_tuple_element_41 = mod_consts[87];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_41 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 280;
        tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_127;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_127 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_127, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_128 = tmp_class_creation_8__metaclass;
        tmp_name_value_10 = mod_consts[17];
        tmp_default_value_8 = mod_consts[54];
        tmp_tuple_element_42 = BUILTIN_GETATTR(tstate, tmp_expression_value_128, tmp_name_value_10, tmp_default_value_8);
        if (tmp_tuple_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_129;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_129 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_129 == NULL));
            tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[17]);
            Py_DECREF(tmp_expression_value_129);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 280;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_75;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_76;
        outline_7_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_fastapi$params$$$class__8_Form_280 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_26;
        }
        frame_059169012f0e00ebffe5d6f4e54377b7_9 = MAKE_CLASS_FRAME(tstate, codeobj_059169012f0e00ebffe5d6f4e54377b7, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_059169012f0e00ebffe5d6f4e54377b7_9);
        assert(Py_REFCNT(frame_059169012f0e00ebffe5d6f4e54377b7_9) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_kw_defaults_7;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            struct Nuitka_CellObject *tmp_closure_7[1];
            tmp_tuple_element_43 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[49]);

            if (tmp_tuple_element_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_43 == NULL)) {
                        tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 283;
                        type_description_2 = "c";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_tuple_element_43);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_defaults_7 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_7, 0, tmp_tuple_element_43);
            tmp_dict_key_15 = mod_consts[25];
            tmp_dict_value_15 = mod_consts[88];
            tmp_kw_defaults_7 = _PyDict_NewPresized( 13 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[7];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[8];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[9];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[10];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[11];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[12];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[13];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[14];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[15];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[16];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[1];
            tmp_dict_value_15 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[49]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;
                        type_description_2 = "c";
                        goto dict_build_exception_13;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto dict_build_exception_13;
                }
            }

            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[2];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_defaults_7);
            Py_DECREF(tmp_kw_defaults_7);
            goto frame_exception_exit_9;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;
            tmp_dict_key_16 = mod_consts[6];
            tmp_dict_value_16 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[41]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_dict_value_16 == NULL)) {
                        tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_dict_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_7);
                        Py_DECREF(tmp_kw_defaults_7);

                        exception_lineno = 283;
                        type_description_2 = "c";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 15 );
            {
                PyObject *tmp_expression_value_130;
                PyObject *tmp_subscript_value_86;
                PyObject *tmp_expression_value_131;
                PyObject *tmp_subscript_value_87;
                PyObject *tmp_expression_value_132;
                PyObject *tmp_subscript_value_88;
                PyObject *tmp_expression_value_133;
                PyObject *tmp_subscript_value_89;
                PyObject *tmp_expression_value_134;
                PyObject *tmp_subscript_value_90;
                PyObject *tmp_expression_value_135;
                PyObject *tmp_subscript_value_91;
                PyObject *tmp_expression_value_136;
                PyObject *tmp_subscript_value_92;
                PyObject *tmp_expression_value_137;
                PyObject *tmp_subscript_value_93;
                PyObject *tmp_expression_value_138;
                PyObject *tmp_subscript_value_94;
                PyObject *tmp_expression_value_139;
                PyObject *tmp_subscript_value_95;
                PyObject *tmp_expression_value_140;
                PyObject *tmp_subscript_value_96;
                PyObject *tmp_expression_value_141;
                PyObject *tmp_subscript_value_97;
                PyObject *tmp_tuple_element_44;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[25];
                tmp_dict_value_16 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[65]);

                if (tmp_dict_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_dict_value_16);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[7];
                tmp_expression_value_130 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_130 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_130 == NULL)) {
                            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_130 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 286;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_130);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_86 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[65]);

                if (tmp_subscript_value_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_86 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_86);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_130, tmp_subscript_value_86);
                Py_DECREF(tmp_expression_value_130);
                Py_DECREF(tmp_subscript_value_86);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[8];
                tmp_expression_value_131 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_131 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_131 == NULL)) {
                            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_131 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 287;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_131);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_87 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[65]);

                if (tmp_subscript_value_87 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_87 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_87);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_131, tmp_subscript_value_87);
                Py_DECREF(tmp_expression_value_131);
                Py_DECREF(tmp_subscript_value_87);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[9];
                tmp_expression_value_132 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_132 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_132 == NULL)) {
                            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_132 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 288;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_132);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_88 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[65]);

                if (tmp_subscript_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_88 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_88);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_132, tmp_subscript_value_88);
                Py_DECREF(tmp_expression_value_132);
                Py_DECREF(tmp_subscript_value_88);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[10];
                tmp_expression_value_133 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_133 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_133 == NULL)) {
                            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_133 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 289;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_133);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_89 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[66]);

                if (tmp_subscript_value_89 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_89 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_89);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_133, tmp_subscript_value_89);
                Py_DECREF(tmp_expression_value_133);
                Py_DECREF(tmp_subscript_value_89);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[11];
                tmp_expression_value_134 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_134 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_134 == NULL)) {
                            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_134 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 290;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_134);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_90 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[66]);

                if (tmp_subscript_value_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_90 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_90);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_134, tmp_subscript_value_90);
                Py_DECREF(tmp_expression_value_134);
                Py_DECREF(tmp_subscript_value_90);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[12];
                tmp_expression_value_135 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_135 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_135 == NULL)) {
                            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_135 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 291;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_135);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_91 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[66]);

                if (tmp_subscript_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_91 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_91);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_135, tmp_subscript_value_91);
                Py_DECREF(tmp_expression_value_135);
                Py_DECREF(tmp_subscript_value_91);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 291;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[13];
                tmp_expression_value_136 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_136 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_136 == NULL)) {
                            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_136 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 292;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_136);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_92 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[66]);

                if (tmp_subscript_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_92 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_92);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_136, tmp_subscript_value_92);
                Py_DECREF(tmp_expression_value_136);
                Py_DECREF(tmp_subscript_value_92);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[14];
                tmp_expression_value_137 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_137 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_137 == NULL)) {
                            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_137 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 293;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_137);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_93 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[67]);

                if (tmp_subscript_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_93 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_93);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_137, tmp_subscript_value_93);
                Py_DECREF(tmp_expression_value_137);
                Py_DECREF(tmp_subscript_value_93);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 293;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[15];
                tmp_expression_value_138 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_138 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_138 == NULL)) {
                            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_138 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 294;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_138);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_94 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[67]);

                if (tmp_subscript_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_94 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_94);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_138, tmp_subscript_value_94);
                Py_DECREF(tmp_expression_value_138);
                Py_DECREF(tmp_subscript_value_94);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[16];
                tmp_expression_value_139 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_139 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_139 == NULL)) {
                            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_139 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 295;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_139);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_95 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[65]);

                if (tmp_subscript_value_95 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_95 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_95);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_139, tmp_subscript_value_95);
                Py_DECREF(tmp_expression_value_139);
                Py_DECREF(tmp_subscript_value_95);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[1];
                tmp_dict_value_16 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[41]);

                if (tmp_dict_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_16 == NULL)) {
                            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 296;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_dict_value_16);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[2];
                tmp_expression_value_140 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[44]);

                if (tmp_expression_value_140 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_140 == NULL)) {
                            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_140 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 297;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_140);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_expression_value_141 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[43]);

                if (tmp_expression_value_141 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_141 == NULL)) {
                            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                        }

                        if (tmp_expression_value_141 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_140);

                            exception_lineno = 297;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_141);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_tuple_element_44 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[65]);

                if (tmp_tuple_element_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_44 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_44);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_subscript_value_97 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_97, 0, tmp_tuple_element_44);
                tmp_tuple_element_44 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[41]);

                if (tmp_tuple_element_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_44 == NULL)) {
                            tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 297;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_44);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_97, 1, tmp_tuple_element_44);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_expression_value_140);
                Py_DECREF(tmp_expression_value_141);
                Py_DECREF(tmp_subscript_value_97);
                goto dict_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_subscript_value_96 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_141, tmp_subscript_value_97);
                Py_DECREF(tmp_expression_value_141);
                Py_DECREF(tmp_subscript_value_97);
                if (tmp_subscript_value_96 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_140);

                    exception_lineno = 297;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_140, tmp_subscript_value_96);
                Py_DECREF(tmp_expression_value_140);
                Py_DECREF(tmp_subscript_value_96);
                if (tmp_dict_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 297;
                    type_description_2 = "c";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[69];
                tmp_dict_value_16 = PyObject_GetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[41]);

                if (tmp_dict_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_16 == NULL)) {
                            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 298;
                            type_description_2 = "c";
                            goto dict_build_exception_14;
                        }
                        Py_INCREF(tmp_dict_value_16);
                    } else {
                        goto dict_build_exception_14;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_14;
            // Exception handling pass through code for dict_build:
            dict_build_exception_14:;
            Py_DECREF(tmp_defaults_7);
            Py_DECREF(tmp_kw_defaults_7);
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_9;
            // Finished with no exception for dict_build:
            dict_build_noexception_14:;

            tmp_closure_7[0] = outline_7_var___class__;
            Py_INCREF(tmp_closure_7[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__9___init__(tmp_defaults_7, tmp_kw_defaults_7, tmp_annotations_9, tmp_closure_7);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_059169012f0e00ebffe5d6f4e54377b7_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_059169012f0e00ebffe5d6f4e54377b7_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_059169012f0e00ebffe5d6f4e54377b7_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_059169012f0e00ebffe5d6f4e54377b7_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_059169012f0e00ebffe5d6f4e54377b7_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_26;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__8_Form_280, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_26;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_16 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_45 = mod_consts[87];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_45 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = locals_fastapi$params$$$class__8_Form_280;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 280;
            tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto try_except_handler_26;
            }
            assert(Nuitka_Cell_GET(outline_7_var___class__) == NULL);
            PyCell_SET(outline_7_var___class__, tmp_assign_source_77);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_7_var___class__));
        tmp_assign_source_76 = Nuitka_Cell_GET(outline_7_var___class__);
        Py_INCREF(tmp_assign_source_76);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_fastapi$params$$$class__8_Form_280);
        locals_fastapi$params$$$class__8_Form_280 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__8_Form_280);
        locals_fastapi$params$$$class__8_Form_280 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 280;
        goto try_except_handler_24;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_76);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_tuple_element_46;
        tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_tuple_element_46 == NULL)) {
            tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_tuple_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        tmp_assign_source_78 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_78, 0, tmp_tuple_element_46);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_79 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_subscript_value_98;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_142 = tmp_class_creation_9__bases;
        tmp_subscript_value_98 = mod_consts[39];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_142, tmp_subscript_value_98, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_81 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_143;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_143 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_143, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_144 = tmp_class_creation_9__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[50]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        tmp_tuple_element_47 = mod_consts[90];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_47);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_47 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_47);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 320;
        tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_145;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_145 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_145, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_146 = tmp_class_creation_9__metaclass;
        tmp_name_value_11 = mod_consts[17];
        tmp_default_value_9 = mod_consts[54];
        tmp_tuple_element_48 = BUILTIN_GETATTR(tstate, tmp_expression_value_146, tmp_name_value_11, tmp_default_value_9);
        if (tmp_tuple_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_147;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_147 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_147 == NULL));
            tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[17]);
            Py_DECREF(tmp_expression_value_147);
            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_48);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_27;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 320;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_27;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_83;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_84;
        outline_8_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_fastapi$params$$$class__9_File_320 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_29;
        }
        frame_ac10d3d09d8cfa8106401794a03aa063_10 = MAKE_CLASS_FRAME(tstate, codeobj_ac10d3d09d8cfa8106401794a03aa063, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ac10d3d09d8cfa8106401794a03aa063_10);
        assert(Py_REFCNT(frame_ac10d3d09d8cfa8106401794a03aa063_10) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_kw_defaults_8;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            struct Nuitka_CellObject *tmp_closure_8[1];
            tmp_tuple_element_49 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[49]);

            if (tmp_tuple_element_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_tuple_element_49 == NULL)) {
                        tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_tuple_element_49 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 323;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_tuple_element_49);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_defaults_8 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_8, 0, tmp_tuple_element_49);
            tmp_dict_key_17 = mod_consts[25];
            tmp_dict_value_17 = mod_consts[91];
            tmp_kw_defaults_8 = _PyDict_NewPresized( 13 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[7];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[8];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[9];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[10];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[11];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[12];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[13];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[14];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[15];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[16];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[1];
            tmp_dict_value_17 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[49]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_17 == NULL)) {
                        tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                    }

                    if (tmp_dict_value_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 336;
                        type_description_2 = "c";
                        goto dict_build_exception_15;
                    }
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto dict_build_exception_15;
                }
            }

            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[2];
            tmp_dict_value_17 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_15;
            // Exception handling pass through code for dict_build:
            dict_build_exception_15:;
            Py_DECREF(tmp_defaults_8);
            Py_DECREF(tmp_kw_defaults_8);
            goto frame_exception_exit_10;
            // Finished with no exception for dict_build:
            dict_build_noexception_15:;
            tmp_dict_key_18 = mod_consts[6];
            tmp_dict_value_18 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[41]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_8);
                        Py_DECREF(tmp_kw_defaults_8);

                        exception_lineno = 323;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 15 );
            {
                PyObject *tmp_expression_value_148;
                PyObject *tmp_subscript_value_99;
                PyObject *tmp_expression_value_149;
                PyObject *tmp_subscript_value_100;
                PyObject *tmp_expression_value_150;
                PyObject *tmp_subscript_value_101;
                PyObject *tmp_expression_value_151;
                PyObject *tmp_subscript_value_102;
                PyObject *tmp_expression_value_152;
                PyObject *tmp_subscript_value_103;
                PyObject *tmp_expression_value_153;
                PyObject *tmp_subscript_value_104;
                PyObject *tmp_expression_value_154;
                PyObject *tmp_subscript_value_105;
                PyObject *tmp_expression_value_155;
                PyObject *tmp_subscript_value_106;
                PyObject *tmp_expression_value_156;
                PyObject *tmp_subscript_value_107;
                PyObject *tmp_expression_value_157;
                PyObject *tmp_subscript_value_108;
                PyObject *tmp_expression_value_158;
                PyObject *tmp_subscript_value_109;
                PyObject *tmp_expression_value_159;
                PyObject *tmp_subscript_value_110;
                PyObject *tmp_tuple_element_50;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[25];
                tmp_dict_value_18 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[65]);

                if (tmp_dict_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_18 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_dict_value_18);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[7];
                tmp_expression_value_148 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_148 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_148 == NULL)) {
                            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_148 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 326;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_148);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_99 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[65]);

                if (tmp_subscript_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_99 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_99);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_148, tmp_subscript_value_99);
                Py_DECREF(tmp_expression_value_148);
                Py_DECREF(tmp_subscript_value_99);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 326;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[8];
                tmp_expression_value_149 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_149 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_149 == NULL)) {
                            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_149 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 327;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_149);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_100 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[65]);

                if (tmp_subscript_value_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_100 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_100);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_149, tmp_subscript_value_100);
                Py_DECREF(tmp_expression_value_149);
                Py_DECREF(tmp_subscript_value_100);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 327;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[9];
                tmp_expression_value_150 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_150 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_150 == NULL)) {
                            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_150 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 328;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_150);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_101 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[65]);

                if (tmp_subscript_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_101 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_101);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_150, tmp_subscript_value_101);
                Py_DECREF(tmp_expression_value_150);
                Py_DECREF(tmp_subscript_value_101);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 328;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[10];
                tmp_expression_value_151 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_151 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_151 == NULL)) {
                            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_151 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 329;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_151);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_102 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[66]);

                if (tmp_subscript_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_102 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_102);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_151, tmp_subscript_value_102);
                Py_DECREF(tmp_expression_value_151);
                Py_DECREF(tmp_subscript_value_102);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 329;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[11];
                tmp_expression_value_152 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_152 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_152 == NULL)) {
                            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_152 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 330;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_152);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_103 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[66]);

                if (tmp_subscript_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_103 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_103);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_152, tmp_subscript_value_103);
                Py_DECREF(tmp_expression_value_152);
                Py_DECREF(tmp_subscript_value_103);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 330;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[12];
                tmp_expression_value_153 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_153 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_153 == NULL)) {
                            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_153 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 331;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_153);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_104 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[66]);

                if (tmp_subscript_value_104 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_104 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_104);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_153, tmp_subscript_value_104);
                Py_DECREF(tmp_expression_value_153);
                Py_DECREF(tmp_subscript_value_104);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 331;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[13];
                tmp_expression_value_154 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_154 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_154 == NULL)) {
                            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_154 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_154);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_105 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[66]);

                if (tmp_subscript_value_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_105 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_105);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_154, tmp_subscript_value_105);
                Py_DECREF(tmp_expression_value_154);
                Py_DECREF(tmp_subscript_value_105);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[14];
                tmp_expression_value_155 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_155 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_155 == NULL)) {
                            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_155 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 333;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_155);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_106 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[67]);

                if (tmp_subscript_value_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_106 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_106);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_155, tmp_subscript_value_106);
                Py_DECREF(tmp_expression_value_155);
                Py_DECREF(tmp_subscript_value_106);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[15];
                tmp_expression_value_156 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_156 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_156 == NULL)) {
                            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_156 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 334;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_156);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_107 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[67]);

                if (tmp_subscript_value_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_107 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_107);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_156, tmp_subscript_value_107);
                Py_DECREF(tmp_expression_value_156);
                Py_DECREF(tmp_subscript_value_107);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 334;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[16];
                tmp_expression_value_157 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_157 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_157 == NULL)) {
                            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_157 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 335;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_157);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_108 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[65]);

                if (tmp_subscript_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_108 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_108);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_157, tmp_subscript_value_108);
                Py_DECREF(tmp_expression_value_157);
                Py_DECREF(tmp_subscript_value_108);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 335;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[1];
                tmp_dict_value_18 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[41]);

                if (tmp_dict_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_18 == NULL)) {
                            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 336;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_dict_value_18);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[2];
                tmp_expression_value_158 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[44]);

                if (tmp_expression_value_158 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_158 == NULL)) {
                            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_158 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 337;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_158);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_expression_value_159 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[43]);

                if (tmp_expression_value_159 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_159 == NULL)) {
                            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                        }

                        if (tmp_expression_value_159 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_158);

                            exception_lineno = 337;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_159);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_tuple_element_50 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[65]);

                if (tmp_tuple_element_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_50 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_50);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_subscript_value_110 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_110, 0, tmp_tuple_element_50);
                tmp_tuple_element_50 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[41]);

                if (tmp_tuple_element_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_50 == NULL)) {
                            tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_50 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 337;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_50);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_110, 1, tmp_tuple_element_50);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_expression_value_158);
                Py_DECREF(tmp_expression_value_159);
                Py_DECREF(tmp_subscript_value_110);
                goto dict_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                tmp_subscript_value_109 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_159, tmp_subscript_value_110);
                Py_DECREF(tmp_expression_value_159);
                Py_DECREF(tmp_subscript_value_110);
                if (tmp_subscript_value_109 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_158);

                    exception_lineno = 337;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_158, tmp_subscript_value_109);
                Py_DECREF(tmp_expression_value_158);
                Py_DECREF(tmp_subscript_value_109);
                if (tmp_dict_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 337;
                    type_description_2 = "c";
                    goto dict_build_exception_16;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[69];
                tmp_dict_value_18 = PyObject_GetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[41]);

                if (tmp_dict_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_dict_value_18 == NULL)) {
                            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_dict_value_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 338;
                            type_description_2 = "c";
                            goto dict_build_exception_16;
                        }
                        Py_INCREF(tmp_dict_value_18);
                    } else {
                        goto dict_build_exception_16;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_16;
            // Exception handling pass through code for dict_build:
            dict_build_exception_16:;
            Py_DECREF(tmp_defaults_8);
            Py_DECREF(tmp_kw_defaults_8);
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_10;
            // Finished with no exception for dict_build:
            dict_build_noexception_16:;

            tmp_closure_8[0] = outline_8_var___class__;
            Py_INCREF(tmp_closure_8[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__10___init__(tmp_defaults_8, tmp_kw_defaults_8, tmp_annotations_10, tmp_closure_8);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ac10d3d09d8cfa8106401794a03aa063_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ac10d3d09d8cfa8106401794a03aa063_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ac10d3d09d8cfa8106401794a03aa063_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ac10d3d09d8cfa8106401794a03aa063_10,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_ac10d3d09d8cfa8106401794a03aa063_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_29;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto try_except_handler_29;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__9_File_320, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_29;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_18 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_51 = mod_consts[90];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_51 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_fastapi$params$$$class__9_File_320;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 320;
            tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto try_except_handler_29;
            }
            assert(Nuitka_Cell_GET(outline_8_var___class__) == NULL);
            PyCell_SET(outline_8_var___class__, tmp_assign_source_85);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_8_var___class__));
        tmp_assign_source_84 = Nuitka_Cell_GET(outline_8_var___class__);
        Py_INCREF(tmp_assign_source_84);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_fastapi$params$$$class__9_File_320);
        locals_fastapi$params$$$class__9_File_320 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__9_File_320);
        locals_fastapi$params$$$class__9_File_320 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 320;
        goto try_except_handler_27;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_84);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_87;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_88;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_fastapi$params$$$class__10_Depends_359 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyDict_SetItem(locals_fastapi$params$$$class__10_Depends_359, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyDict_SetItem(locals_fastapi$params$$$class__10_Depends_359, mod_consts[57], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_82ce8237d7a014aafad57e0ce5b61474_11 = MAKE_CLASS_FRAME(tstate, codeobj_82ce8237d7a014aafad57e0ce5b61474, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_82ce8237d7a014aafad57e0ce5b61474_11);
        assert(Py_REFCNT(frame_82ce8237d7a014aafad57e0ce5b61474_11) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_9;
            PyObject *tmp_kw_defaults_9;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_160;
            PyObject *tmp_subscript_value_111;
            PyObject *tmp_expression_value_161;
            PyObject *tmp_subscript_value_112;
            PyObject *tmp_tuple_element_52;
            tmp_defaults_9 = mod_consts[94];
            tmp_kw_defaults_9 = DICT_COPY(mod_consts[95]);
            tmp_dict_key_19 = mod_consts[26];
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_expression_value_160 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_9);

                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_expression_value_161 == NULL)) {
                tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
            }

            if (tmp_expression_value_161 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_9);

                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_tuple_element_52 = Py_Ellipsis;
            tmp_subscript_value_112 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_112, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_2 = "o";
                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_112, 1, tmp_tuple_element_52);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_kw_defaults_9);
            Py_DECREF(tmp_subscript_value_112);
            goto frame_exception_exit_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_subscript_value_111 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_161, tmp_subscript_value_112);
            Py_DECREF(tmp_subscript_value_112);
            if (tmp_subscript_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_9);

                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_160, tmp_subscript_value_111);
            Py_DECREF(tmp_subscript_value_111);
            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_9);

                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[27];
            tmp_dict_value_19 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__11___init__(tmp_defaults_9, tmp_kw_defaults_9, tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_fastapi$params$$$class__10_Depends_359, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_82ce8237d7a014aafad57e0ce5b61474_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_82ce8237d7a014aafad57e0ce5b61474_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_82ce8237d7a014aafad57e0ce5b61474_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_82ce8237d7a014aafad57e0ce5b61474_11,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_82ce8237d7a014aafad57e0ce5b61474_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_32;
        skip_nested_handling_10:;
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[97]);


            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__12___repr__(tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_fastapi$params$$$class__10_Depends_359, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_kwargs_value_19;
            tmp_called_value_19 = (PyObject *)&PyType_Type;
            tmp_tuple_element_53 = mod_consts[93];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = mod_consts[99];
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_53);
            tmp_tuple_element_53 = locals_fastapi$params$$$class__10_Depends_359;
            PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 359;
            tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto try_except_handler_32;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_89;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_88 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_88);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_fastapi$params$$$class__10_Depends_359);
        locals_fastapi$params$$$class__10_Depends_359 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__10_Depends_359);
        locals_fastapi$params$$$class__10_Depends_359 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 359;
        goto try_except_handler_30;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_88);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_tuple_element_54;
        tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_tuple_element_54 == NULL)) {
            tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        assert(!(tmp_tuple_element_54 == NULL));
        tmp_assign_source_90 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_90, 0, tmp_tuple_element_54);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_90;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_91 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_subscript_value_113;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_162 = tmp_class_creation_11__bases;
        tmp_subscript_value_113 = mod_consts[39];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_162, tmp_subscript_value_113, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_10 = tmp_class_creation_11__bases;
        tmp_assign_source_93 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_93;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_expression_value_163;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_163 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_163, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_args_value_20;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_kwargs_value_20;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_164 = tmp_class_creation_11__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[50]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        tmp_tuple_element_55 = mod_consts[100];
        tmp_args_value_20 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_55);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_55 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_55);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_20 = tmp_class_creation_11__class_decl_dict;
        frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 372;
        tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_20, tmp_kwargs_value_20);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_20);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_94;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_165;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_165 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_165, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_166 = tmp_class_creation_11__metaclass;
        tmp_name_value_12 = mod_consts[17];
        tmp_default_value_10 = mod_consts[54];
        tmp_tuple_element_56 = BUILTIN_GETATTR(tstate, tmp_expression_value_166, tmp_name_value_12, tmp_default_value_10);
        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_167;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_56);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_20 = tmp_class_creation_11__prepared;
            tmp_expression_value_167 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_167 == NULL));
            tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[17]);
            Py_DECREF(tmp_expression_value_167);
            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_56);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 372;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_33;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_95;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_96;
        outline_10_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_fastapi$params$$$class__11_Security_372 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_35;
        }
        frame_bb3048d05f5d727dcb4ab98e538c94ac_12 = MAKE_CLASS_FRAME(tstate, codeobj_bb3048d05f5d727dcb4ab98e538c94ac, module_fastapi$params, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bb3048d05f5d727dcb4ab98e538c94ac_12);
        assert(Py_REFCNT(frame_bb3048d05f5d727dcb4ab98e538c94ac_12) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_10;
            PyObject *tmp_kw_defaults_10;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_subscript_value_114;
            PyObject *tmp_expression_value_169;
            PyObject *tmp_subscript_value_115;
            PyObject *tmp_tuple_element_57;
            struct Nuitka_CellObject *tmp_closure_9[1];
            tmp_defaults_10 = mod_consts[94];
            tmp_kw_defaults_10 = DICT_COPY(mod_consts[101]);
            tmp_dict_key_20 = mod_consts[26];
            tmp_expression_value_168 = PyObject_GetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[44]);

            if (tmp_expression_value_168 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_168 == NULL)) {
                        tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                    }

                    if (tmp_expression_value_168 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_10);

                        exception_lineno = 375;
                        type_description_2 = "c";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_expression_value_168);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_expression_value_169 = PyObject_GetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[42]);

            if (tmp_expression_value_169 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_expression_value_169 == NULL)) {
                        tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
                    }

                    if (tmp_expression_value_169 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_10);
                        Py_DECREF(tmp_expression_value_168);

                        exception_lineno = 375;
                        type_description_2 = "c";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_expression_value_169);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_tuple_element_57 = Py_Ellipsis;
            tmp_subscript_value_115 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_115, 0, tmp_tuple_element_57);
            tmp_tuple_element_57 = PyObject_GetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[41]);

            if (tmp_tuple_element_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_tuple_element_57 == NULL)) {
                        tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_tuple_element_57 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 375;
                        type_description_2 = "c";
                        goto tuple_build_exception_20;
                    }
                    Py_INCREF(tmp_tuple_element_57);
                } else {
                    goto tuple_build_exception_20;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_115, 1, tmp_tuple_element_57);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_kw_defaults_10);
            Py_DECREF(tmp_expression_value_168);
            Py_DECREF(tmp_expression_value_169);
            Py_DECREF(tmp_subscript_value_115);
            goto frame_exception_exit_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_subscript_value_114 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_169, tmp_subscript_value_115);
            Py_DECREF(tmp_expression_value_169);
            Py_DECREF(tmp_subscript_value_115);
            if (tmp_subscript_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_10);
                Py_DECREF(tmp_expression_value_168);

                exception_lineno = 375;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_168, tmp_subscript_value_114);
            Py_DECREF(tmp_expression_value_168);
            Py_DECREF(tmp_subscript_value_114);
            if (tmp_dict_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_10);

                exception_lineno = 375;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_170;
                PyObject *tmp_subscript_value_116;
                PyObject *tmp_expression_value_171;
                PyObject *tmp_subscript_value_117;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_20, tmp_dict_value_20);
                Py_DECREF(tmp_dict_value_20);
                assert(!(tmp_res != 0));
                tmp_dict_key_20 = mod_consts[30];
                tmp_expression_value_170 = PyObject_GetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[44]);

                if (tmp_expression_value_170 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_170 == NULL)) {
                            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_expression_value_170 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 377;
                            type_description_2 = "c";
                            goto dict_build_exception_17;
                        }
                        Py_INCREF(tmp_expression_value_170);
                    } else {
                        goto dict_build_exception_17;
                    }
                }

                tmp_expression_value_171 = PyObject_GetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[45]);

                if (tmp_expression_value_171 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_expression_value_171 == NULL)) {
                            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_expression_value_171 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_170);

                            exception_lineno = 377;
                            type_description_2 = "c";
                            goto dict_build_exception_17;
                        }
                        Py_INCREF(tmp_expression_value_171);
                    } else {
                        goto dict_build_exception_17;
                    }
                }

                tmp_subscript_value_117 = PyObject_GetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[65]);

                if (tmp_subscript_value_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_117 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_117);
                    } else {
                        goto dict_build_exception_17;
                    }
                }

                tmp_subscript_value_116 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_171, tmp_subscript_value_117);
                Py_DECREF(tmp_expression_value_171);
                Py_DECREF(tmp_subscript_value_117);
                if (tmp_subscript_value_116 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_170);

                    exception_lineno = 377;
                    type_description_2 = "c";
                    goto dict_build_exception_17;
                }
                tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_170, tmp_subscript_value_116);
                Py_DECREF(tmp_expression_value_170);
                Py_DECREF(tmp_subscript_value_116);
                if (tmp_dict_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "c";
                    goto dict_build_exception_17;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_20, tmp_dict_value_20);
                Py_DECREF(tmp_dict_value_20);
                assert(!(tmp_res != 0));
                tmp_dict_key_20 = mod_consts[27];
                tmp_dict_value_20 = PyObject_GetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[68]);

                if (tmp_dict_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_20 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_20);
                    } else {
                        goto dict_build_exception_17;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_20, tmp_dict_value_20);
                Py_DECREF(tmp_dict_value_20);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_17;
            // Exception handling pass through code for dict_build:
            dict_build_exception_17:;
            Py_DECREF(tmp_kw_defaults_10);
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_12;
            // Finished with no exception for dict_build:
            dict_build_noexception_17:;
            Py_INCREF(tmp_defaults_10);

            tmp_closure_9[0] = outline_10_var___class__;
            Py_INCREF(tmp_closure_9[0]);

            tmp_dictset_value = MAKE_FUNCTION_fastapi$params$$$function__13___init__(tmp_defaults_10, tmp_kw_defaults_10, tmp_annotations_13, tmp_closure_9);

            tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bb3048d05f5d727dcb4ab98e538c94ac_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bb3048d05f5d727dcb4ab98e538c94ac_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bb3048d05f5d727dcb4ab98e538c94ac_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bb3048d05f5d727dcb4ab98e538c94ac_12,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_bb3048d05f5d727dcb4ab98e538c94ac_12);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_35;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto try_except_handler_35;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_fastapi$params$$$class__11_Security_372, mod_consts[62], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto try_except_handler_35;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_97;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_kwargs_value_21;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_21 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_58 = mod_consts[100];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_58 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_58);
            tmp_tuple_element_58 = locals_fastapi$params$$$class__11_Security_372;
            PyTuple_SET_ITEM0(tmp_args_value_21, 2, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
            frame_0680c777b7beeafd23199c36958bc72c->m_frame.f_lineno = 372;
            tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_21, tmp_kwargs_value_21);
            Py_DECREF(tmp_args_value_21);
            if (tmp_assign_source_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto try_except_handler_35;
            }
            assert(Nuitka_Cell_GET(outline_10_var___class__) == NULL);
            PyCell_SET(outline_10_var___class__, tmp_assign_source_97);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_10_var___class__));
        tmp_assign_source_96 = Nuitka_Cell_GET(outline_10_var___class__);
        Py_INCREF(tmp_assign_source_96);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_fastapi$params$$$class__11_Security_372);
        locals_fastapi$params$$$class__11_Security_372 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_fastapi$params$$$class__11_Security_372);
        locals_fastapi$params$$$class__11_Security_372 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 372;
        goto try_except_handler_33;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_fastapi$params, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_96);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_12;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0680c777b7beeafd23199c36958bc72c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0680c777b7beeafd23199c36958bc72c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0680c777b7beeafd23199c36958bc72c, exception_lineno);
    }



    assertFrameObject(frame_0680c777b7beeafd23199c36958bc72c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_12:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("fastapi.params", false);

    Py_INCREF(module_fastapi$params);
    return module_fastapi$params;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastapi$params, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("fastapi$params", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
