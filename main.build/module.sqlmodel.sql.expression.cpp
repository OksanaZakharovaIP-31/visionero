/* Generated code for Python module 'sqlmodel.sql.expression'
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

/* The "module_sqlmodel$sql$expression" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlmodel$sql$expression;
PyDictObject *moduledict_sqlmodel$sql$expression;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[83];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[83];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlmodel.sql.expression"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 83; i++) {
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
void checkModuleConstants_sqlmodel$sql$expression(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 83; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5134b4be2ce43ae510a1dba45f803839;
static PyCodeObject *codeobj_0a94a8cdffe3811188a74aebb49efc2a;
static PyCodeObject *codeobj_edfc0f1adc95e814ee0617bbeb07b06d;
static PyCodeObject *codeobj_ec8cd23641a2f4fa87c5b0a4e609b3b9;
static PyCodeObject *codeobj_8f69643e00737d6059543457059053f4;
static PyCodeObject *codeobj_dd2614c297f8ed2e6ce91005dfa65f43;
static PyCodeObject *codeobj_59645d3b221d2ada49ff5ca9689a8eaf;
static PyCodeObject *codeobj_94ae155dfc3b031ef6ed9bb5219d7d14;
static PyCodeObject *codeobj_404e297eddeb605b6a18e3b00a3faad5;
static PyCodeObject *codeobj_79b01025cd542c4a2aae2eac8affd369;
static PyCodeObject *codeobj_9e167f322c023cbad3894adbf3b5b198;
static PyCodeObject *codeobj_5fe9e862a31979bd6baa8b398794a1ed;
static PyCodeObject *codeobj_e46be60bca36bec6603899fa45646671;
static PyCodeObject *codeobj_9b1e40724afb118dfaed4bdb871ac58b;
static PyCodeObject *codeobj_81599037294ffaee5b6969672f88c631;
static PyCodeObject *codeobj_5ddbc05772a921e7785e2232bdd2a9d5;
static PyCodeObject *codeobj_34fa0a9525d851f00b4980d760621759;
static PyCodeObject *codeobj_9c079eb4f09a6b9fffb2a7f1fb4981cf;
static PyCodeObject *codeobj_acb945fbad7828cb6d401db03ce75666;
static PyCodeObject *codeobj_6103e952b73add0939a5e7c5e408530f;
static PyCodeObject *codeobj_8ab7c17d64eb2a7e0c2ab01b4df80c8c;
static PyCodeObject *codeobj_04d43eefc1685da526d17834ab4cc17b;
static PyCodeObject *codeobj_a2bf2b86f8df8d4ef5c17211458c3a56;
static PyCodeObject *codeobj_5ad432edd9019a552f7cdd79101f4145;
static PyCodeObject *codeobj_8759a0b0b831bf0658861ab1b41a1d1f;
static PyCodeObject *codeobj_73ae7b1dd95e2159a57cdd01be122672;
static PyCodeObject *codeobj_9f7e395ff674cf324dd8f0c307ce3977;
static PyCodeObject *codeobj_ad9b45077f9d078ea2f16f8ec8c688a0;
static PyCodeObject *codeobj_7dda46e39811beb17939881212bf5651;
static PyCodeObject *codeobj_50c2c7f143655115b98041440577b145;
static PyCodeObject *codeobj_9ded8e06127b92c7759d0c6462633f62;
static PyCodeObject *codeobj_58a9a484ac29c010086012bbf6919311;
static PyCodeObject *codeobj_5d650c0aa13e97a48b986e761c211409;
static PyCodeObject *codeobj_f3b8e831c28ea8936d4f5ce894cadeef;
static PyCodeObject *codeobj_28027034c3c21880e3b993f79c1ae1fd;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[74]); CHECK_OBJECT(module_filename_obj);
    codeobj_5134b4be2ce43ae510a1dba45f803839 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[75], mod_consts[75], NULL, NULL, 0, 0, 0);
    codeobj_0a94a8cdffe3811188a74aebb49efc2a = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[76], NULL, 0, 0, 0);
    codeobj_edfc0f1adc95e814ee0617bbeb07b06d = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[76], NULL, 0, 0, 0);
    codeobj_ec8cd23641a2f4fa87c5b0a4e609b3b9 = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[77], NULL, 1, 0, 0);
    codeobj_8f69643e00737d6059543457059053f4 = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[78], NULL, 0, 0, 0);
    codeobj_dd2614c297f8ed2e6ce91005dfa65f43 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_59645d3b221d2ada49ff5ca9689a8eaf = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_94ae155dfc3b031ef6ed9bb5219d7d14 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_404e297eddeb605b6a18e3b00a3faad5 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_79b01025cd542c4a2aae2eac8affd369 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_9e167f322c023cbad3894adbf3b5b198 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_5fe9e862a31979bd6baa8b398794a1ed = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_e46be60bca36bec6603899fa45646671 = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_9b1e40724afb118dfaed4bdb871ac58b = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_81599037294ffaee5b6969672f88c631 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_5ddbc05772a921e7785e2232bdd2a9d5 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_34fa0a9525d851f00b4980d760621759 = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_9c079eb4f09a6b9fffb2a7f1fb4981cf = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_acb945fbad7828cb6d401db03ce75666 = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_6103e952b73add0939a5e7c5e408530f = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_8ab7c17d64eb2a7e0c2ab01b4df80c8c = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 4, 0, 0);
    codeobj_04d43eefc1685da526d17834ab4cc17b = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[80], NULL, 3, 0, 0);
    codeobj_a2bf2b86f8df8d4ef5c17211458c3a56 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[80], NULL, 3, 0, 0);
    codeobj_5ad432edd9019a552f7cdd79101f4145 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[80], NULL, 3, 0, 0);
    codeobj_8759a0b0b831bf0658861ab1b41a1d1f = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[80], NULL, 3, 0, 0);
    codeobj_73ae7b1dd95e2159a57cdd01be122672 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[80], NULL, 3, 0, 0);
    codeobj_9f7e395ff674cf324dd8f0c307ce3977 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[80], NULL, 3, 0, 0);
    codeobj_ad9b45077f9d078ea2f16f8ec8c688a0 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[80], NULL, 3, 0, 0);
    codeobj_7dda46e39811beb17939881212bf5651 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[80], NULL, 3, 0, 0);
    codeobj_50c2c7f143655115b98041440577b145 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[81], NULL, 2, 0, 0);
    codeobj_9ded8e06127b92c7759d0c6462633f62 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[81], NULL, 2, 0, 0);
    codeobj_58a9a484ac29c010086012bbf6919311 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[81], NULL, 2, 0, 0);
    codeobj_5d650c0aa13e97a48b986e761c211409 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[81], NULL, 2, 0, 0);
    codeobj_f3b8e831c28ea8936d4f5ce894cadeef = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[82], NULL, 1, 0, 0);
    codeobj_28027034c3c21880e3b993f79c1ae1fd = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_VARKEYWORDS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[82], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__10_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__11_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__12_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__13_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__14_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__15_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__16_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__17_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__18_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__19_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__1_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__20_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__21_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__22_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__23_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__24_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__25_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__26_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__27_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__28_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__29_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__2_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__30_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__31_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__32_col(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__3_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__4_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__5_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__6_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__7_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__8_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__9_select(PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlmodel$sql$expression$$$function__31_select(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_entities = python_pars[0];
    PyObject *par_kw = python_pars[1];
    struct Nuitka_FrameObject *frame_8f69643e00737d6059543457059053f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f69643e00737d6059543457059053f4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f69643e00737d6059543457059053f4)) {
        Py_XDECREF(cache_frame_8f69643e00737d6059543457059053f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f69643e00737d6059543457059053f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f69643e00737d6059543457059053f4 = MAKE_FUNCTION_FRAME(tstate, codeobj_8f69643e00737d6059543457059053f4, module_sqlmodel$sql$expression, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f69643e00737d6059543457059053f4->m_type_description == NULL);
    frame_8f69643e00737d6059543457059053f4 = cache_frame_8f69643e00737d6059543457059053f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8f69643e00737d6059543457059053f4);
    assert(Py_REFCNT(frame_8f69643e00737d6059543457059053f4) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_entities);
        tmp_len_arg_1 = par_entities;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_entities);
        tmp_dircall_arg2_1 = par_entities;
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_entities);
        tmp_dircall_arg2_2 = par_entities;
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_2 = par_kw;
        Py_INCREF(tmp_dircall_arg2_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
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
        exception_tb = MAKE_TRACEBACK(frame_8f69643e00737d6059543457059053f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f69643e00737d6059543457059053f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f69643e00737d6059543457059053f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f69643e00737d6059543457059053f4,
        type_description_1,
        par_entities,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_8f69643e00737d6059543457059053f4 == cache_frame_8f69643e00737d6059543457059053f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f69643e00737d6059543457059053f4);
        cache_frame_8f69643e00737d6059543457059053f4 = NULL;
    }

    assertFrameObject(frame_8f69643e00737d6059543457059053f4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_entities);
    Py_DECREF(par_entities);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_entities);
    Py_DECREF(par_entities);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlmodel$sql$expression$$$function__32_col(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_column_expression = python_pars[0];
    struct Nuitka_FrameObject *frame_ec8cd23641a2f4fa87c5b0a4e609b3b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9)) {
        Py_XDECREF(cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9 = MAKE_FUNCTION_FRAME(tstate, codeobj_ec8cd23641a2f4fa87c5b0a4e609b3b9, module_sqlmodel$sql$expression, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9->m_type_description == NULL);
    frame_ec8cd23641a2f4fa87c5b0a4e609b3b9 = cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ec8cd23641a2f4fa87c5b0a4e609b3b9);
    assert(Py_REFCNT(frame_ec8cd23641a2f4fa87c5b0a4e609b3b9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_column_expression);
        tmp_isinstance_inst_1 = par_column_expression;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[6];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_column_expression);
            tmp_format_value_1 = par_column_expression;
            tmp_format_spec_1 = mod_consts[7];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ec8cd23641a2f4fa87c5b0a4e609b3b9->m_frame.f_lineno = 436;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 436;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ec8cd23641a2f4fa87c5b0a4e609b3b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec8cd23641a2f4fa87c5b0a4e609b3b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec8cd23641a2f4fa87c5b0a4e609b3b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec8cd23641a2f4fa87c5b0a4e609b3b9,
        type_description_1,
        par_column_expression
    );


    // Release cached frame if used for exception.
    if (frame_ec8cd23641a2f4fa87c5b0a4e609b3b9 == cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9);
        cache_frame_ec8cd23641a2f4fa87c5b0a4e609b3b9 = NULL;
    }

    assertFrameObject(frame_ec8cd23641a2f4fa87c5b0a4e609b3b9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_column_expression);
    tmp_return_value = par_column_expression;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column_expression);
    Py_DECREF(par_column_expression);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column_expression);
    Py_DECREF(par_column_expression);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__10_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8759a0b0b831bf0658861ab1b41a1d1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__11_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_73ae7b1dd95e2159a57cdd01be122672,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__12_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9f7e395ff674cf324dd8f0c307ce3977,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__13_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad9b45077f9d078ea2f16f8ec8c688a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__14_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7dda46e39811beb17939881212bf5651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__15_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd2614c297f8ed2e6ce91005dfa65f43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__16_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_59645d3b221d2ada49ff5ca9689a8eaf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__17_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_94ae155dfc3b031ef6ed9bb5219d7d14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__18_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_404e297eddeb605b6a18e3b00a3faad5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__19_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_79b01025cd542c4a2aae2eac8affd369,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__1_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f3b8e831c28ea8936d4f5ce894cadeef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__20_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9e167f322c023cbad3894adbf3b5b198,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__21_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5fe9e862a31979bd6baa8b398794a1ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__22_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e46be60bca36bec6603899fa45646671,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__23_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b1e40724afb118dfaed4bdb871ac58b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__24_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81599037294ffaee5b6969672f88c631,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__25_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ddbc05772a921e7785e2232bdd2a9d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__26_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34fa0a9525d851f00b4980d760621759,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__27_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9c079eb4f09a6b9fffb2a7f1fb4981cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__28_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_acb945fbad7828cb6d401db03ce75666,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__29_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6103e952b73add0939a5e7c5e408530f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__2_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28027034c3c21880e3b993f79c1ae1fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__30_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8ab7c17d64eb2a7e0c2ab01b4df80c8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__31_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlmodel$sql$expression$$$function__31_select,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f69643e00737d6059543457059053f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__32_col(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlmodel$sql$expression$$$function__32_col,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec8cd23641a2f4fa87c5b0a4e609b3b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__3_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50c2c7f143655115b98041440577b145,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__4_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ded8e06127b92c7759d0c6462633f62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__5_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_58a9a484ac29c010086012bbf6919311,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__6_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d650c0aa13e97a48b986e761c211409,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__7_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04d43eefc1685da526d17834ab4cc17b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__8_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a2bf2b86f8df8d4ef5c17211458c3a56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$sql$expression$$$function__9_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ad432edd9019a552f7cdd79101f4145,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$sql$expression,
        NULL,
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

function_impl_code functable_sqlmodel$sql$expression[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_sqlmodel$sql$expression$$$function__31_select,
    impl_sqlmodel$sql$expression$$$function__32_col,
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

    function_impl_code *current = functable_sqlmodel$sql$expression;
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

    if (offset > sizeof(functable_sqlmodel$sql$expression) || offset < 0) {
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
        functable_sqlmodel$sql$expression[offset],
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
        module_sqlmodel$sql$expression,
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
PyObject *modulecode_sqlmodel$sql$expression(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlmodel.sql.expression");

    // Store the module for future use.
    module_sqlmodel$sql$expression = module;

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
        PRINT_STRING("sqlmodel.sql.expression: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlmodel.sql.expression: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlmodel$sql$expression\n");

    moduledict_sqlmodel$sql$expression = MODULE_DICT(module_sqlmodel$sql$expression);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlmodel$sql$expression,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlmodel$sql$expression,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[7]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlmodel$sql$expression,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlmodel$sql$expression,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlmodel$sql$expression,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlmodel$sql$expression);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlmodel$sql$expression);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_5134b4be2ce43ae510a1dba45f803839;
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
    int tmp_res;
    PyObject *locals_sqlmodel$sql$expression$$$class__1_Select_26 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0a94a8cdffe3811188a74aebb49efc2a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34 = NULL;
    struct Nuitka_FrameObject *frame_edfc0f1adc95e814ee0617bbeb07b06d_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    frame_5134b4be2ce43ae510a1dba45f803839 = MAKE_MODULE_FRAME(codeobj_5134b4be2ce43ae510a1dba45f803839, module_sqlmodel$sql$expression);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5134b4be2ce43ae510a1dba45f803839);
    assert(Py_REFCNT(frame_5134b4be2ce43ae510a1dba45f803839) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlmodel$sql$expression;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[15];
        tmp_level_value_1 = mod_consts[16];
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[14],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        UPDATE_STRING_DICT0(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[18],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[18]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[19],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[19]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[20],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[20]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[21],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[21]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[22],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[22]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[23],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[23]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[24],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[24]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[25],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[25]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[26],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[26]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[27];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlmodel$sql$expression;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[28];
        tmp_level_value_2 = mod_consts[16];
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 16;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[29],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[30];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlmodel$sql$expression;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[31];
        tmp_level_value_3 = mod_consts[16];
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 18;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[4],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[32];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlmodel$sql$expression;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[33];
        tmp_level_value_4 = mod_consts[16];
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 19;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[5],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[34];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlmodel$sql$expression;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[35];
        tmp_level_value_5 = mod_consts[16];
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 20;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[3],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[36];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlmodel$sql$expression;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[37];
        tmp_level_value_6 = mod_consts[16];
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 21;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlmodel$sql$expression,
                mod_consts[2],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 23;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[39]);

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_21);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        tmp_assign_source_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_1);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_subscript_value_1 == NULL)) {
                tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            assert(!(tmp_subscript_value_1 == NULL));
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_22);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_23 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[16];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[41]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[41]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[2];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 26;
        tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[42]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[43];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_7 = mod_consts[44];
        tmp_default_value_1 = mod_consts[45];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_7, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[44]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 26;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlmodel$sql$expression$$$class__1_Select_26 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_sqlmodel$sql$expression$$$class__1_Select_26, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyObject_SetItem(locals_sqlmodel$sql$expression$$$class__1_Select_26, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_4;
        }
        frame_0a94a8cdffe3811188a74aebb49efc2a_2 = MAKE_CLASS_FRAME(tstate, codeobj_0a94a8cdffe3811188a74aebb49efc2a, module_sqlmodel$sql$expression, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0a94a8cdffe3811188a74aebb49efc2a_2);
        assert(Py_REFCNT(frame_0a94a8cdffe3811188a74aebb49efc2a_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlmodel$sql$expression$$$class__1_Select_26, mod_consts[49], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0a94a8cdffe3811188a74aebb49efc2a_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0a94a8cdffe3811188a74aebb49efc2a_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0a94a8cdffe3811188a74aebb49efc2a_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0a94a8cdffe3811188a74aebb49efc2a_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_0a94a8cdffe3811188a74aebb49efc2a_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
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


                exception_lineno = 26;

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_sqlmodel$sql$expression$$$class__1_Select_26, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[2];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_sqlmodel$sql$expression$$$class__1_Select_26;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 26;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_28 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_sqlmodel$sql$expression$$$class__1_Select_26);
        locals_sqlmodel$sql$expression$$$class__1_Select_26 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlmodel$sql$expression$$$class__1_Select_26);
        locals_sqlmodel$sql$expression$$$class__1_Select_26 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 26;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_28);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_5);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_subscript_value_3 == NULL)) {
                tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_subscript_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_30);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_31 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_9 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[16];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[41]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[41]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[0];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 34;
        tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_12 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[42]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
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
        PyObject *tmp_expression_value_13;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[43];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_name_value_8 = mod_consts[44];
        tmp_default_value_2 = mod_consts[45];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_8, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[44]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 34;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_35;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyObject_SetItem(locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_7;
        }
        frame_edfc0f1adc95e814ee0617bbeb07b06d_3 = MAKE_CLASS_FRAME(tstate, codeobj_edfc0f1adc95e814ee0617bbeb07b06d, module_sqlmodel$sql$expression, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_edfc0f1adc95e814ee0617bbeb07b06d_3);
        assert(Py_REFCNT(frame_edfc0f1adc95e814ee0617bbeb07b06d_3) == 2);

        // Framed code:
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34, mod_consts[49], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_edfc0f1adc95e814ee0617bbeb07b06d_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_edfc0f1adc95e814ee0617bbeb07b06d_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_edfc0f1adc95e814ee0617bbeb07b06d_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_edfc0f1adc95e814ee0617bbeb07b06d_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_edfc0f1adc95e814ee0617bbeb07b06d_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
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


                exception_lineno = 34;

                goto try_except_handler_7;
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
        tmp_res = PyObject_SetItem(locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[0];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 34;
            tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_36 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34);
        locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34);
        locals_sqlmodel$sql$expression$$$class__2_SelectOfScalar_34 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 34;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_36);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[51];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = (PyObject *)&PyFloat_Type;
        tmp_args_element_value_8 = (PyObject *)&PyLong_Type;
        tmp_args_element_value_9 = (PyObject *)&PyBool_Type;
        tmp_args_element_value_10 = (PyObject *)&PyBytes_Type;
        tmp_args_element_value_11 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_12 = Py_None;
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS12(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 59;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[53]);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[55];
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = (PyObject *)&PyFloat_Type;
        tmp_args_element_value_20 = (PyObject *)&PyLong_Type;
        tmp_args_element_value_21 = (PyObject *)&PyBool_Type;
        tmp_args_element_value_22 = (PyObject *)&PyBytes_Type;
        tmp_args_element_value_23 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_24 = Py_None;
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS12(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 77;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[56], 0), mod_consts[53]);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[58];
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = (PyObject *)&PyFloat_Type;
        tmp_args_element_value_32 = (PyObject *)&PyLong_Type;
        tmp_args_element_value_33 = (PyObject *)&PyBool_Type;
        tmp_args_element_value_34 = (PyObject *)&PyBytes_Type;
        tmp_args_element_value_35 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_36 = Py_None;
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS12(tstate, tmp_called_value_10, call_args);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 95;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[53]);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[61];
        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_38 == NULL)) {
            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_41 == NULL)) {
            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = (PyObject *)&PyFloat_Type;
        tmp_args_element_value_44 = (PyObject *)&PyLong_Type;
        tmp_args_element_value_45 = (PyObject *)&PyBool_Type;
        tmp_args_element_value_46 = (PyObject *)&PyBytes_Type;
        tmp_args_element_value_47 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_48 = Py_None;
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS12(tstate, tmp_called_value_12, call_args);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 113;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[53]);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[64];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[65];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[66];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_subscript_value_5 == NULL)) {
                tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_subscript_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_args_element_value_49 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__1_select(tmp_annotations_1);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 119;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_49);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[64];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_6 == NULL)) {
            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_7;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[65];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[66];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_args_element_value_50 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__2_select(tmp_annotations_2);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 124;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[64];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_tuple_element_9;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[68];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[65];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[66];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_3;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_3;
            }
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_9);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_value_9);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_subscript_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_subscript_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_args_element_value_51 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__3_select(tmp_annotations_3);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 132;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = mod_consts[64];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_tuple_element_10;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[68];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_10 == NULL)) {
                tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_10);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[65];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[66];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_4;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_10);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_subscript_value_12);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_12);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_subscript_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_args_element_value_52 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__4_select(tmp_annotations_4);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 141;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_13;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = mod_consts[64];
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_13 == NULL)) {
            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_13);
        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_tuple_element_11;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[68];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[65];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[66];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_5;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_5;
            }
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_11);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_value_15);
            goto dict_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_15);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_subscript_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_14);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_args_element_value_53 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__5_select(tmp_annotations_5);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 150;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_16;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = mod_consts[64];
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_16 == NULL)) {
            tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_16);
        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_tuple_element_12;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[68];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_17 == NULL)) {
                tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_17);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[65];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[66];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_6;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_6;
            }
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_12);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_subscript_value_19);
            goto dict_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_19);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_subscript_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_args_element_value_54 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__6_select(tmp_annotations_6);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 159;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = mod_consts[64];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_tuple_element_13;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[68];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[69];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[65];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[66];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_7;
            }
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_7;
            }
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_21, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_21, 2, tmp_tuple_element_13);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_subscript_value_21);
            goto dict_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_subscript_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_21);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_subscript_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_20);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_args_element_value_55 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__7_select(tmp_annotations_7);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 168;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_55);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = mod_consts[64];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_tuple_element_14;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[68];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[69];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_22 == NULL)) {
                tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_22);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[65];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[66];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_8;
            }
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_24, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_24, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_24, 2, tmp_tuple_element_14);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_subscript_value_24);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_subscript_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_24);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_subscript_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_23);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;


        tmp_args_element_value_56 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__8_select(tmp_annotations_8);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 178;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_56);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = mod_consts[64];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_tuple_element_15;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[68];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_25 == NULL)) {
                tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_25);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[69];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[65];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[66];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_9;
            }
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_9;
            }
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_27, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_27, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_27, 2, tmp_tuple_element_15);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_subscript_value_27);
            goto dict_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_27);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_subscript_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_26);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_args_element_value_57 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__9_select(tmp_annotations_9);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 188;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_57);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_10 = mod_consts[64];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_tuple_element_16;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[68];
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_28);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[69];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_29 == NULL)) {
                tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_29);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[65];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[66];
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_10;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_10;
            }
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_31, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_31, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_31, 2, tmp_tuple_element_16);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_subscript_value_31);
            goto dict_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_subscript_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_31);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_subscript_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_30);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;


        tmp_args_element_value_58 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__10_select(tmp_annotations_10);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 198;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_58);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_32;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_11 = mod_consts[64];
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_32 == NULL)) {
            tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_32);
        if (tmp_dict_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_tuple_element_17;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[68];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[69];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[65];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[66];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_11;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_11;
            }
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_34, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_34, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_34, 2, tmp_tuple_element_17);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_subscript_value_34);
            goto dict_build_exception_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_34);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_subscript_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_11;
            }
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_33);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_args_element_value_59 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__11_select(tmp_annotations_11);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 208;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_59);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_35;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_12 = mod_consts[64];
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_35 == NULL)) {
            tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_35);
        if (tmp_dict_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_tuple_element_18;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[68];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[69];
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_36 == NULL)) {
                tmp_subscript_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_36);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[65];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[66];
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_12;
            }
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_12;
            }
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 2, tmp_tuple_element_18);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_subscript_value_38);
            goto dict_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_38);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_subscript_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_37);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_args_element_value_60 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__12_select(tmp_annotations_12);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 218;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_60);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_39;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_13 = mod_consts[64];
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_39 == NULL)) {
            tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_39);
        if (tmp_dict_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_tuple_element_19;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[68];
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_40 == NULL)) {
                tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_13;
            }
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_40);
            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[69];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[65];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[66];
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_13;
            }
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_13;
            }
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_42, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_42, 2, tmp_tuple_element_19);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_subscript_value_42);
            goto dict_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_subscript_value_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_42);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_subscript_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_13;
            }
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_41);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;


        tmp_args_element_value_61 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__13_select(tmp_annotations_13);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 228;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_43;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_14 = mod_consts[64];
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_43 == NULL)) {
            tmp_subscript_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_43);
        if (tmp_dict_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_tuple_element_20;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[68];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_44 == NULL)) {
                tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_44);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[69];
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_45 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_45 == NULL)) {
                tmp_subscript_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_45);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[65];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[66];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_14;
            }
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_14;
            }
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_47 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_47, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_47, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_47, 2, tmp_tuple_element_20);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_subscript_value_47);
            goto dict_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_subscript_value_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_47);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_subscript_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_14;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_46);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;


        tmp_args_element_value_62 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__14_select(tmp_annotations_14);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 238;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_62);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_15 = mod_consts[64];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_tuple_element_21;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[68];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[69];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[70];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[65];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[66];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_15;
            }
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_15;
            }
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_15;
            }
            tmp_subscript_value_49 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_49, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_49, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_49, 2, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_49, 3, tmp_tuple_element_21);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_subscript_value_49);
            goto dict_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_subscript_value_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_49);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_subscript_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_15;
            }
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_48);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_dict_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_annotations_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;


        tmp_args_element_value_63 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__15_select(tmp_annotations_15);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 248;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_63);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_16 = mod_consts[64];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_50;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_tuple_element_22;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[68];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[69];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[70];
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_50 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_50 == NULL)) {
                tmp_subscript_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_subscript_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_50);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[65];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[66];
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_16;
            }
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_16;
            }
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_52 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_52, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_52, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_52, 2, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_52, 3, tmp_tuple_element_22);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_subscript_value_52);
            goto dict_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_subscript_value_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_52);
            Py_DECREF(tmp_subscript_value_52);
            if (tmp_subscript_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_16;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_51);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_annotations_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;


        tmp_args_element_value_64 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__16_select(tmp_annotations_16);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 259;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_64);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_17 = mod_consts[64];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_53;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_54;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_55;
            PyObject *tmp_tuple_element_23;
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[68];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[69];
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_17;
            }
            tmp_subscript_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_53 == NULL)) {
                tmp_subscript_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_17;
            }
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_53);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[70];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[65];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[66];
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_17;
            }
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_17;
            }
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_17;
            }
            tmp_subscript_value_55 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_55, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_55, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_55, 2, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_55, 3, tmp_tuple_element_23);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_subscript_value_55);
            goto dict_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_subscript_value_54 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_55);
            Py_DECREF(tmp_subscript_value_55);
            if (tmp_subscript_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_17;
            }
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_54);
            Py_DECREF(tmp_subscript_value_54);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_annotations_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;


        tmp_args_element_value_65 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__17_select(tmp_annotations_17);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 270;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_65);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_18 = mod_consts[64];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_56;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_subscript_value_58;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_59;
            PyObject *tmp_tuple_element_24;
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[68];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[69];
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_56 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_56 == NULL)) {
                tmp_subscript_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_56);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[70];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_57 == NULL)) {
                tmp_subscript_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_subscript_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_57);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[65];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[66];
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_18;
            }
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_18;
            }
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_18;
            }
            tmp_subscript_value_59 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_59, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_59, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_59, 2, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_59, 3, tmp_tuple_element_24);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_subscript_value_59);
            goto dict_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_subscript_value_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_59);
            Py_DECREF(tmp_subscript_value_59);
            if (tmp_subscript_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_18;
            }
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_58);
            Py_DECREF(tmp_subscript_value_58);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_18;
        // Exception handling pass through code for dict_build:
        dict_build_exception_18:;
        Py_DECREF(tmp_annotations_18);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_18:;


        tmp_args_element_value_66 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__18_select(tmp_annotations_18);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 281;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_66);
        Py_DECREF(tmp_args_element_value_66);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_19 = mod_consts[64];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_60;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_61;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_62;
            PyObject *tmp_tuple_element_25;
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[68];
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto dict_build_exception_19;
            }
            tmp_subscript_value_60 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_60 == NULL)) {
                tmp_subscript_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto dict_build_exception_19;
            }
            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_60);
            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[69];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[70];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[65];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[66];
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto dict_build_exception_19;
            }
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto dict_build_exception_19;
            }
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto dict_build_exception_19;
            }
            tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_62, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_62, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_62, 2, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_62, 3, tmp_tuple_element_25);
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_subscript_value_62);
            goto dict_build_exception_19;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            tmp_subscript_value_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_62);
            Py_DECREF(tmp_subscript_value_62);
            if (tmp_subscript_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto dict_build_exception_19;
            }
            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_61);
            Py_DECREF(tmp_subscript_value_61);
            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_19;
        // Exception handling pass through code for dict_build:
        dict_build_exception_19:;
        Py_DECREF(tmp_annotations_19);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_19:;


        tmp_args_element_value_67 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__19_select(tmp_annotations_19);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 292;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_67);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_20 = mod_consts[64];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_63;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_64;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_65;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_66;
            PyObject *tmp_tuple_element_26;
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[68];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto dict_build_exception_20;
            }
            tmp_subscript_value_63 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_63 == NULL)) {
                tmp_subscript_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto dict_build_exception_20;
            }
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_63);
            if (tmp_dict_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto dict_build_exception_20;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[69];
            tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_20 == NULL)) {
                tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto dict_build_exception_20;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[70];
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_20;
            }
            tmp_subscript_value_64 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_64 == NULL)) {
                tmp_subscript_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_subscript_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_20;
            }
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_64);
            if (tmp_dict_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_20;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[65];
            tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_20 == NULL)) {
                tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto dict_build_exception_20;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[66];
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_20;
            }
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_20;
            }
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_20;
            }
            tmp_subscript_value_66 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_66, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_66, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_66, 2, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_66, 3, tmp_tuple_element_26);
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_subscript_value_66);
            goto dict_build_exception_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_subscript_value_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_66);
            Py_DECREF(tmp_subscript_value_66);
            if (tmp_subscript_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_20;
            }
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_65);
            Py_DECREF(tmp_subscript_value_65);
            if (tmp_dict_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_20;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_20;
        // Exception handling pass through code for dict_build:
        dict_build_exception_20:;
        Py_DECREF(tmp_annotations_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_20:;


        tmp_args_element_value_68 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__20_select(tmp_annotations_20);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 303;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_68);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_21 = mod_consts[64];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_67;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_68;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_69;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_70;
            PyObject *tmp_tuple_element_27;
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[68];
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto dict_build_exception_21;
            }
            tmp_subscript_value_67 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_67 == NULL)) {
                tmp_subscript_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto dict_build_exception_21;
            }
            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_67);
            if (tmp_dict_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[69];
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto dict_build_exception_21;
            }
            tmp_subscript_value_68 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_68 == NULL)) {
                tmp_subscript_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto dict_build_exception_21;
            }
            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_68);
            if (tmp_dict_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[70];
            tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_21 == NULL)) {
                tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[65];
            tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_21 == NULL)) {
                tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[66];
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto dict_build_exception_21;
            }
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto dict_build_exception_21;
            }
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto dict_build_exception_21;
            }
            tmp_subscript_value_70 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_70, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_70, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_70, 2, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_70, 3, tmp_tuple_element_27);
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_subscript_value_70);
            goto dict_build_exception_21;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            tmp_subscript_value_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_70);
            Py_DECREF(tmp_subscript_value_70);
            if (tmp_subscript_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto dict_build_exception_21;
            }
            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_69);
            Py_DECREF(tmp_subscript_value_69);
            if (tmp_dict_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_21;
        // Exception handling pass through code for dict_build:
        dict_build_exception_21:;
        Py_DECREF(tmp_annotations_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_21:;


        tmp_args_element_value_69 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__21_select(tmp_annotations_21);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 314;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_22 = mod_consts[64];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_71;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_72;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_73;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_74;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_subscript_value_75;
            PyObject *tmp_tuple_element_28;
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[68];
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto dict_build_exception_22;
            }
            tmp_subscript_value_71 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_71 == NULL)) {
                tmp_subscript_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto dict_build_exception_22;
            }
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_71);
            if (tmp_dict_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto dict_build_exception_22;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[69];
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto dict_build_exception_22;
            }
            tmp_subscript_value_72 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_72 == NULL)) {
                tmp_subscript_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto dict_build_exception_22;
            }
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_72);
            if (tmp_dict_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto dict_build_exception_22;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[70];
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto dict_build_exception_22;
            }
            tmp_subscript_value_73 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_73 == NULL)) {
                tmp_subscript_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_subscript_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto dict_build_exception_22;
            }
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_73);
            if (tmp_dict_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto dict_build_exception_22;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[65];
            tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_22 == NULL)) {
                tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto dict_build_exception_22;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[66];
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto dict_build_exception_22;
            }
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto dict_build_exception_22;
            }
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto dict_build_exception_22;
            }
            tmp_subscript_value_75 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_75, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_75, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_75, 2, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_75, 3, tmp_tuple_element_28);
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_subscript_value_75);
            goto dict_build_exception_22;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_subscript_value_74 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_75);
            Py_DECREF(tmp_subscript_value_75);
            if (tmp_subscript_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto dict_build_exception_22;
            }
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_74);
            Py_DECREF(tmp_subscript_value_74);
            if (tmp_dict_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;

                goto dict_build_exception_22;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_22;
        // Exception handling pass through code for dict_build:
        dict_build_exception_22:;
        Py_DECREF(tmp_annotations_22);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_22:;


        tmp_args_element_value_70 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__22_select(tmp_annotations_22);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 325;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_70);
        Py_DECREF(tmp_args_element_value_70);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_76;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_23 = mod_consts[64];
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_76 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_76 == NULL)) {
            tmp_subscript_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_86, tmp_subscript_value_76);
        if (tmp_dict_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_87;
            PyObject *tmp_subscript_value_77;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_subscript_value_78;
            PyObject *tmp_tuple_element_29;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[68];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto dict_build_exception_23;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[69];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;

                goto dict_build_exception_23;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[70];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;

                goto dict_build_exception_23;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[65];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;

                goto dict_build_exception_23;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[66];
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto dict_build_exception_23;
            }
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto dict_build_exception_23;
            }
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto dict_build_exception_23;
            }
            tmp_subscript_value_78 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_78, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_78, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_78, 2, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_78, 3, tmp_tuple_element_29);
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_subscript_value_78);
            goto dict_build_exception_23;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_subscript_value_77 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_88, tmp_subscript_value_78);
            Py_DECREF(tmp_subscript_value_78);
            if (tmp_subscript_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto dict_build_exception_23;
            }
            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_77);
            Py_DECREF(tmp_subscript_value_77);
            if (tmp_dict_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto dict_build_exception_23;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_23;
        // Exception handling pass through code for dict_build:
        dict_build_exception_23:;
        Py_DECREF(tmp_annotations_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_23:;


        tmp_args_element_value_71 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__23_select(tmp_annotations_23);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 336;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_71);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_79;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_24 = mod_consts[64];
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_79 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_79 == NULL)) {
            tmp_subscript_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_79);
        if (tmp_dict_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_annotations_24 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_subscript_value_80;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_subscript_value_81;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_subscript_value_82;
            PyObject *tmp_tuple_element_30;
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[68];
            tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_24 == NULL)) {
                tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto dict_build_exception_24;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[69];
            tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_24 == NULL)) {
                tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto dict_build_exception_24;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[70];
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto dict_build_exception_24;
            }
            tmp_subscript_value_80 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_80 == NULL)) {
                tmp_subscript_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_subscript_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto dict_build_exception_24;
            }
            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_90, tmp_subscript_value_80);
            if (tmp_dict_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;

                goto dict_build_exception_24;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[65];
            tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_24 == NULL)) {
                tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto dict_build_exception_24;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[66];
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto dict_build_exception_24;
            }
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto dict_build_exception_24;
            }
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto dict_build_exception_24;
            }
            tmp_subscript_value_82 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_82, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_82, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_82, 2, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_82, 3, tmp_tuple_element_30);
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_subscript_value_82);
            goto dict_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_subscript_value_81 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_82);
            Py_DECREF(tmp_subscript_value_82);
            if (tmp_subscript_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto dict_build_exception_24;
            }
            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_91, tmp_subscript_value_81);
            Py_DECREF(tmp_subscript_value_81);
            if (tmp_dict_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto dict_build_exception_24;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_24;
        // Exception handling pass through code for dict_build:
        dict_build_exception_24:;
        Py_DECREF(tmp_annotations_24);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_24:;


        tmp_args_element_value_72 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__24_select(tmp_annotations_24);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 347;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_72);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_83;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_25 = mod_consts[64];
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_83 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_83 == NULL)) {
            tmp_subscript_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_83);
        if (tmp_dict_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_annotations_25 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_94;
            PyObject *tmp_subscript_value_84;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_subscript_value_85;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_subscript_value_86;
            PyObject *tmp_tuple_element_31;
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[68];
            tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_25 == NULL)) {
                tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_25;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[69];
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto dict_build_exception_25;
            }
            tmp_subscript_value_84 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_84 == NULL)) {
                tmp_subscript_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto dict_build_exception_25;
            }
            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_84);
            if (tmp_dict_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto dict_build_exception_25;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[70];
            tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_25 == NULL)) {
                tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto dict_build_exception_25;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[65];
            tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_25 == NULL)) {
                tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_25;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[66];
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_25;
            }
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_25;
            }
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_25;
            }
            tmp_subscript_value_86 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_86, 0, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_86, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_86, 2, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_86, 3, tmp_tuple_element_31);
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_subscript_value_86);
            goto dict_build_exception_25;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            tmp_subscript_value_85 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_86);
            Py_DECREF(tmp_subscript_value_86);
            if (tmp_subscript_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_25;
            }
            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_85);
            Py_DECREF(tmp_subscript_value_85);
            if (tmp_dict_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_25;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_25;
        // Exception handling pass through code for dict_build:
        dict_build_exception_25:;
        Py_DECREF(tmp_annotations_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_25:;


        tmp_args_element_value_73 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__25_select(tmp_annotations_25);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 358;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_73);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_annotations_26;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_87;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_26 = mod_consts[64];
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_87 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_87 == NULL)) {
            tmp_subscript_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_97, tmp_subscript_value_87);
        if (tmp_dict_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_annotations_26 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_98;
            PyObject *tmp_subscript_value_88;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_subscript_value_89;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_subscript_value_90;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_subscript_value_91;
            PyObject *tmp_tuple_element_32;
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[68];
            tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_dict_value_26 == NULL)) {
                tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_dict_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto dict_build_exception_26;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[69];
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_26;
            }
            tmp_subscript_value_88 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_88 == NULL)) {
                tmp_subscript_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_26;
            }
            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_98, tmp_subscript_value_88);
            if (tmp_dict_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_26;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[70];
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_26;
            }
            tmp_subscript_value_89 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_89 == NULL)) {
                tmp_subscript_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_subscript_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_26;
            }
            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_99, tmp_subscript_value_89);
            if (tmp_dict_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_26;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[65];
            tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_26 == NULL)) {
                tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto dict_build_exception_26;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[66];
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto dict_build_exception_26;
            }
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto dict_build_exception_26;
            }
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto dict_build_exception_26;
            }
            tmp_subscript_value_91 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_91, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_91, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_91, 2, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_91, 3, tmp_tuple_element_32);
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_subscript_value_91);
            goto dict_build_exception_26;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            tmp_subscript_value_90 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_101, tmp_subscript_value_91);
            Py_DECREF(tmp_subscript_value_91);
            if (tmp_subscript_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto dict_build_exception_26;
            }
            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_100, tmp_subscript_value_90);
            Py_DECREF(tmp_subscript_value_90);
            if (tmp_dict_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto dict_build_exception_26;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_26;
        // Exception handling pass through code for dict_build:
        dict_build_exception_26:;
        Py_DECREF(tmp_annotations_26);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_26:;


        tmp_args_element_value_74 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__26_select(tmp_annotations_26);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 369;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_74);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_annotations_27;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_92;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_27 = mod_consts[64];
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_92 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_92 == NULL)) {
            tmp_subscript_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_102, tmp_subscript_value_92);
        if (tmp_dict_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_annotations_27 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_93;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_subscript_value_94;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_95;
            PyObject *tmp_tuple_element_33;
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[68];
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto dict_build_exception_27;
            }
            tmp_subscript_value_93 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_93 == NULL)) {
                tmp_subscript_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto dict_build_exception_27;
            }
            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_103, tmp_subscript_value_93);
            if (tmp_dict_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto dict_build_exception_27;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[69];
            tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_27 == NULL)) {
                tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto dict_build_exception_27;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[70];
            tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_27 == NULL)) {
                tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto dict_build_exception_27;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[65];
            tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_27 == NULL)) {
                tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto dict_build_exception_27;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[66];
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto dict_build_exception_27;
            }
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto dict_build_exception_27;
            }
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto dict_build_exception_27;
            }
            tmp_subscript_value_95 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_95, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_95, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_95, 2, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_95, 3, tmp_tuple_element_33);
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_subscript_value_95);
            goto dict_build_exception_27;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            tmp_subscript_value_94 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_105, tmp_subscript_value_95);
            Py_DECREF(tmp_subscript_value_95);
            if (tmp_subscript_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto dict_build_exception_27;
            }
            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_104, tmp_subscript_value_94);
            Py_DECREF(tmp_subscript_value_94);
            if (tmp_dict_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto dict_build_exception_27;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_27;
        // Exception handling pass through code for dict_build:
        dict_build_exception_27:;
        Py_DECREF(tmp_annotations_27);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_27:;


        tmp_args_element_value_75 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__27_select(tmp_annotations_27);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 380;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_75);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_annotations_28;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_subscript_value_96;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_28 = mod_consts[64];
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_96 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_96 == NULL)) {
            tmp_subscript_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_106, tmp_subscript_value_96);
        if (tmp_dict_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        tmp_annotations_28 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_107;
            PyObject *tmp_subscript_value_97;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_subscript_value_98;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_subscript_value_99;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_subscript_value_100;
            PyObject *tmp_tuple_element_34;
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[68];
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto dict_build_exception_28;
            }
            tmp_subscript_value_97 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_97 == NULL)) {
                tmp_subscript_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto dict_build_exception_28;
            }
            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_107, tmp_subscript_value_97);
            if (tmp_dict_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[69];
            tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_28 == NULL)) {
                tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;

                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[70];
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;

                goto dict_build_exception_28;
            }
            tmp_subscript_value_98 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_98 == NULL)) {
                tmp_subscript_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_subscript_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;

                goto dict_build_exception_28;
            }
            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_108, tmp_subscript_value_98);
            if (tmp_dict_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;

                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[65];
            tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_28 == NULL)) {
                tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;

                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[66];
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto dict_build_exception_28;
            }
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto dict_build_exception_28;
            }
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto dict_build_exception_28;
            }
            tmp_subscript_value_100 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_100, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_100, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_100, 2, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_100, 3, tmp_tuple_element_34);
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_subscript_value_100);
            goto dict_build_exception_28;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_subscript_value_99 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_110, tmp_subscript_value_100);
            Py_DECREF(tmp_subscript_value_100);
            if (tmp_subscript_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto dict_build_exception_28;
            }
            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_109, tmp_subscript_value_99);
            Py_DECREF(tmp_subscript_value_99);
            if (tmp_dict_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_28;
        // Exception handling pass through code for dict_build:
        dict_build_exception_28:;
        Py_DECREF(tmp_annotations_28);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_28:;


        tmp_args_element_value_76 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__28_select(tmp_annotations_28);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 391;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_76);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_annotations_29;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_subscript_value_101;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_29 = mod_consts[64];
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_101 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_101 == NULL)) {
            tmp_subscript_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_111, tmp_subscript_value_101);
        if (tmp_dict_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_annotations_29 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_112;
            PyObject *tmp_subscript_value_102;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_subscript_value_103;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_subscript_value_104;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_subscript_value_105;
            PyObject *tmp_tuple_element_35;
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[68];
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;

                goto dict_build_exception_29;
            }
            tmp_subscript_value_102 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_102 == NULL)) {
                tmp_subscript_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;

                goto dict_build_exception_29;
            }
            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_112, tmp_subscript_value_102);
            if (tmp_dict_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;

                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[69];
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto dict_build_exception_29;
            }
            tmp_subscript_value_103 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_103 == NULL)) {
                tmp_subscript_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto dict_build_exception_29;
            }
            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_113, tmp_subscript_value_103);
            if (tmp_dict_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[70];
            tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_29 == NULL)) {
                tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;

                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[65];
            tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_29 == NULL)) {
                tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;

                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[66];
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto dict_build_exception_29;
            }
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto dict_build_exception_29;
            }
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto dict_build_exception_29;
            }
            tmp_subscript_value_105 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_105, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_105, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_105, 2, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_105, 3, tmp_tuple_element_35);
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_subscript_value_105);
            goto dict_build_exception_29;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_subscript_value_104 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_115, tmp_subscript_value_105);
            Py_DECREF(tmp_subscript_value_105);
            if (tmp_subscript_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto dict_build_exception_29;
            }
            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_114, tmp_subscript_value_104);
            Py_DECREF(tmp_subscript_value_104);
            if (tmp_dict_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_29;
        // Exception handling pass through code for dict_build:
        dict_build_exception_29:;
        Py_DECREF(tmp_annotations_29);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_29:;


        tmp_args_element_value_77 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__29_select(tmp_annotations_29);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 402;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_77);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_annotations_30;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_subscript_value_106;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_30 = mod_consts[64];
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_106 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_subscript_value_106 == NULL)) {
            tmp_subscript_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_subscript_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_116, tmp_subscript_value_106);
        if (tmp_dict_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_annotations_30 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_117;
            PyObject *tmp_subscript_value_107;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_subscript_value_108;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_subscript_value_109;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_subscript_value_110;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_subscript_value_111;
            PyObject *tmp_tuple_element_36;
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[68];
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto dict_build_exception_30;
            }
            tmp_subscript_value_107 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_subscript_value_107 == NULL)) {
                tmp_subscript_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_subscript_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto dict_build_exception_30;
            }
            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_117, tmp_subscript_value_107);
            if (tmp_dict_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[69];
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto dict_build_exception_30;
            }
            tmp_subscript_value_108 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_subscript_value_108 == NULL)) {
                tmp_subscript_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_subscript_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto dict_build_exception_30;
            }
            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_118, tmp_subscript_value_108);
            if (tmp_dict_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[70];
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto dict_build_exception_30;
            }
            tmp_subscript_value_109 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_subscript_value_109 == NULL)) {
                tmp_subscript_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_subscript_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto dict_build_exception_30;
            }
            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_119, tmp_subscript_value_109);
            if (tmp_dict_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[65];
            tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_30 == NULL)) {
                tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;

                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[66];
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto dict_build_exception_30;
            }
            tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_121 == NULL)) {
                tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto dict_build_exception_30;
            }
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto dict_build_exception_30;
            }
            tmp_subscript_value_111 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM0(tmp_subscript_value_111, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_111, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_111, 2, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_111, 3, tmp_tuple_element_36);
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_subscript_value_111);
            goto dict_build_exception_30;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            tmp_subscript_value_110 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_121, tmp_subscript_value_111);
            Py_DECREF(tmp_subscript_value_111);
            if (tmp_subscript_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto dict_build_exception_30;
            }
            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_120, tmp_subscript_value_110);
            Py_DECREF(tmp_subscript_value_110);
            if (tmp_dict_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_30;
        // Exception handling pass through code for dict_build:
        dict_build_exception_30:;
        Py_DECREF(tmp_annotations_30);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_30:;


        tmp_args_element_value_78 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__30_select(tmp_annotations_30);

        frame_5134b4be2ce43ae510a1dba45f803839->m_frame.f_lineno = 413;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_78);
        Py_DECREF(tmp_args_element_value_78);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_annotations_31;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        tmp_dict_key_31 = mod_consts[71];
        tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_dict_value_31 == NULL)) {
            tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_dict_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_annotations_31 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_122;
            PyObject *tmp_subscript_value_112;
            PyObject *tmp_tuple_element_37;
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[65];
            tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_dict_value_31 == NULL)) {
                tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_dict_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[66];
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto dict_build_exception_31;
            }
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto dict_build_exception_31;
            }
            tmp_subscript_value_112 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_112, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_112, 1, tmp_tuple_element_37);
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_subscript_value_112);
            goto dict_build_exception_31;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_122, tmp_subscript_value_112);
            Py_DECREF(tmp_subscript_value_112);
            if (tmp_dict_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_31;
        // Exception handling pass through code for dict_build:
        dict_build_exception_31:;
        Py_DECREF(tmp_annotations_31);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_31:;


        tmp_assign_source_76 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__31_select(tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_annotations_32;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        tmp_dict_key_32 = mod_consts[72];
        tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_dict_value_32 == NULL)) {
            tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_dict_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_annotations_32 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = mod_consts[66];
        tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_dict_value_32 == NULL)) {
            tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_dict_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto dict_build_exception_32;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_32;
        // Exception handling pass through code for dict_build:
        dict_build_exception_32:;
        Py_DECREF(tmp_annotations_32);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_32:;


        tmp_assign_source_77 = MAKE_FUNCTION_sqlmodel$sql$expression$$$function__32_col(tmp_annotations_32);

        UPDATE_STRING_DICT1(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_77);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5134b4be2ce43ae510a1dba45f803839, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5134b4be2ce43ae510a1dba45f803839->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5134b4be2ce43ae510a1dba45f803839, exception_lineno);
    }



    assertFrameObject(frame_5134b4be2ce43ae510a1dba45f803839);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlmodel.sql.expression", false);

    Py_INCREF(module_sqlmodel$sql$expression);
    return module_sqlmodel$sql$expression;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlmodel$sql$expression, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlmodel$sql$expression", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
