/* Generated code for Python module 'fastapi.param_functions'
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

/* The "module_fastapi$param_functions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_fastapi$param_functions;
PyDictObject *moduledict_fastapi$param_functions;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[66];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[66];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("fastapi.param_functions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 66; i++) {
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
void checkModuleConstants_fastapi$param_functions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 66; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a1f6307b7714050e7aa3faea27465045;
static PyCodeObject *codeobj_8beaf1634e0f4bb371b7b717e6836a8b;
static PyCodeObject *codeobj_e30ae0a93ae7200d0ae14cff54edb6f7;
static PyCodeObject *codeobj_139a65e8be6dcb72b64067680a83a326;
static PyCodeObject *codeobj_22d4713e10e3233a60f565bff9b464ad;
static PyCodeObject *codeobj_be965f279a6986fabc6c459bf6c77e30;
static PyCodeObject *codeobj_1fbba4144e4b9abd5c72ff3cf6b669ae;
static PyCodeObject *codeobj_96201a5b6a7b7b3b009ac19f26b33ef7;
static PyCodeObject *codeobj_b836fdb6d9bc12be387c61b4fb20607f;
static PyCodeObject *codeobj_1df43e327f8e05ac02536cc63f676d52;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[59]); CHECK_OBJECT(module_filename_obj);
    codeobj_a1f6307b7714050e7aa3faea27465045 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[60], mod_consts[60], NULL, NULL, 0, 0, 0);
    codeobj_8beaf1634e0f4bb371b7b717e6836a8b = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[61], NULL, 1, 14, 0);
    codeobj_e30ae0a93ae7200d0ae14cff54edb6f7 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[62], NULL, 1, 14, 0);
    codeobj_139a65e8be6dcb72b64067680a83a326 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[27], NULL, 1, 1, 0);
    codeobj_22d4713e10e3233a60f565bff9b464ad = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[63], NULL, 1, 13, 0);
    codeobj_be965f279a6986fabc6c459bf6c77e30 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[63], NULL, 1, 13, 0);
    codeobj_1fbba4144e4b9abd5c72ff3cf6b669ae = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[64], NULL, 1, 15, 0);
    codeobj_96201a5b6a7b7b3b009ac19f26b33ef7 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[62], NULL, 1, 14, 0);
    codeobj_b836fdb6d9bc12be387c61b4fb20607f = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[62], NULL, 1, 14, 0);
    codeobj_1df43e327f8e05ac02536cc63f676d52 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[29], NULL, 1, 2, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__1_Path(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__2_Query(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__3_Header(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__4_Cookie(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__5_Body(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__6_Form(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__7_File(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__8_Depends(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__9_Security(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_fastapi$param_functions$$$function__1_Path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *par_alias = python_pars[1];
    PyObject *par_title = python_pars[2];
    PyObject *par_description = python_pars[3];
    PyObject *par_gt = python_pars[4];
    PyObject *par_ge = python_pars[5];
    PyObject *par_lt = python_pars[6];
    PyObject *par_le = python_pars[7];
    PyObject *par_min_length = python_pars[8];
    PyObject *par_max_length = python_pars[9];
    PyObject *par_regex = python_pars[10];
    PyObject *par_example = python_pars[11];
    PyObject *par_examples = python_pars[12];
    PyObject *par_deprecated = python_pars[13];
    PyObject *par_include_in_schema = python_pars[14];
    PyObject *par_extra = python_pars[15];
    struct Nuitka_FrameObject *frame_96201a5b6a7b7b3b009ac19f26b33ef7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7)) {
        Py_XDECREF(cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7 = MAKE_FUNCTION_FRAME(tstate, codeobj_96201a5b6a7b7b3b009ac19f26b33ef7, module_fastapi$param_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7->m_type_description == NULL);
    frame_96201a5b6a7b7b3b009ac19f26b33ef7 = cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_96201a5b6a7b7b3b009ac19f26b33ef7);
    assert(Py_REFCNT(frame_96201a5b6a7b7b3b009ac19f26b33ef7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_deprecated);
        tmp_dict_value_1 = par_deprecated;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_include_in_schema);
        tmp_dict_value_1 = par_include_in_schema;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_96201a5b6a7b7b3b009ac19f26b33ef7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96201a5b6a7b7b3b009ac19f26b33ef7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96201a5b6a7b7b3b009ac19f26b33ef7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96201a5b6a7b7b3b009ac19f26b33ef7,
        type_description_1,
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
        par_extra
    );


    // Release cached frame if used for exception.
    if (frame_96201a5b6a7b7b3b009ac19f26b33ef7 == cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7);
        cache_frame_96201a5b6a7b7b3b009ac19f26b33ef7 = NULL;
    }

    assertFrameObject(frame_96201a5b6a7b7b3b009ac19f26b33ef7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
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


static PyObject *impl_fastapi$param_functions$$$function__2_Query(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *par_alias = python_pars[1];
    PyObject *par_title = python_pars[2];
    PyObject *par_description = python_pars[3];
    PyObject *par_gt = python_pars[4];
    PyObject *par_ge = python_pars[5];
    PyObject *par_lt = python_pars[6];
    PyObject *par_le = python_pars[7];
    PyObject *par_min_length = python_pars[8];
    PyObject *par_max_length = python_pars[9];
    PyObject *par_regex = python_pars[10];
    PyObject *par_example = python_pars[11];
    PyObject *par_examples = python_pars[12];
    PyObject *par_deprecated = python_pars[13];
    PyObject *par_include_in_schema = python_pars[14];
    PyObject *par_extra = python_pars[15];
    struct Nuitka_FrameObject *frame_b836fdb6d9bc12be387c61b4fb20607f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b836fdb6d9bc12be387c61b4fb20607f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b836fdb6d9bc12be387c61b4fb20607f)) {
        Py_XDECREF(cache_frame_b836fdb6d9bc12be387c61b4fb20607f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b836fdb6d9bc12be387c61b4fb20607f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b836fdb6d9bc12be387c61b4fb20607f = MAKE_FUNCTION_FRAME(tstate, codeobj_b836fdb6d9bc12be387c61b4fb20607f, module_fastapi$param_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b836fdb6d9bc12be387c61b4fb20607f->m_type_description == NULL);
    frame_b836fdb6d9bc12be387c61b4fb20607f = cache_frame_b836fdb6d9bc12be387c61b4fb20607f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b836fdb6d9bc12be387c61b4fb20607f);
    assert(Py_REFCNT(frame_b836fdb6d9bc12be387c61b4fb20607f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_deprecated);
        tmp_dict_value_1 = par_deprecated;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_include_in_schema);
        tmp_dict_value_1 = par_include_in_schema;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_b836fdb6d9bc12be387c61b4fb20607f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b836fdb6d9bc12be387c61b4fb20607f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b836fdb6d9bc12be387c61b4fb20607f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b836fdb6d9bc12be387c61b4fb20607f,
        type_description_1,
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
        par_extra
    );


    // Release cached frame if used for exception.
    if (frame_b836fdb6d9bc12be387c61b4fb20607f == cache_frame_b836fdb6d9bc12be387c61b4fb20607f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b836fdb6d9bc12be387c61b4fb20607f);
        cache_frame_b836fdb6d9bc12be387c61b4fb20607f = NULL;
    }

    assertFrameObject(frame_b836fdb6d9bc12be387c61b4fb20607f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
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


static PyObject *impl_fastapi$param_functions$$$function__3_Header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *par_alias = python_pars[1];
    PyObject *par_convert_underscores = python_pars[2];
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
    struct Nuitka_FrameObject *frame_1fbba4144e4b9abd5c72ff3cf6b669ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae)) {
        Py_XDECREF(cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae = MAKE_FUNCTION_FRAME(tstate, codeobj_1fbba4144e4b9abd5c72ff3cf6b669ae, module_fastapi$param_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae->m_type_description == NULL);
    frame_1fbba4144e4b9abd5c72ff3cf6b669ae = cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1fbba4144e4b9abd5c72ff3cf6b669ae);
    assert(Py_REFCNT(frame_1fbba4144e4b9abd5c72ff3cf6b669ae) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 16 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(par_convert_underscores);
        tmp_dict_value_1 = par_convert_underscores;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_deprecated);
        tmp_dict_value_1 = par_deprecated;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_include_in_schema);
        tmp_dict_value_1 = par_include_in_schema;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_1fbba4144e4b9abd5c72ff3cf6b669ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fbba4144e4b9abd5c72ff3cf6b669ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fbba4144e4b9abd5c72ff3cf6b669ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1fbba4144e4b9abd5c72ff3cf6b669ae,
        type_description_1,
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
        par_extra
    );


    // Release cached frame if used for exception.
    if (frame_1fbba4144e4b9abd5c72ff3cf6b669ae == cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae);
        cache_frame_1fbba4144e4b9abd5c72ff3cf6b669ae = NULL;
    }

    assertFrameObject(frame_1fbba4144e4b9abd5c72ff3cf6b669ae);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
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


static PyObject *impl_fastapi$param_functions$$$function__4_Cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *par_alias = python_pars[1];
    PyObject *par_title = python_pars[2];
    PyObject *par_description = python_pars[3];
    PyObject *par_gt = python_pars[4];
    PyObject *par_ge = python_pars[5];
    PyObject *par_lt = python_pars[6];
    PyObject *par_le = python_pars[7];
    PyObject *par_min_length = python_pars[8];
    PyObject *par_max_length = python_pars[9];
    PyObject *par_regex = python_pars[10];
    PyObject *par_example = python_pars[11];
    PyObject *par_examples = python_pars[12];
    PyObject *par_deprecated = python_pars[13];
    PyObject *par_include_in_schema = python_pars[14];
    PyObject *par_extra = python_pars[15];
    struct Nuitka_FrameObject *frame_e30ae0a93ae7200d0ae14cff54edb6f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7)) {
        Py_XDECREF(cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7 = MAKE_FUNCTION_FRAME(tstate, codeobj_e30ae0a93ae7200d0ae14cff54edb6f7, module_fastapi$param_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7->m_type_description == NULL);
    frame_e30ae0a93ae7200d0ae14cff54edb6f7 = cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e30ae0a93ae7200d0ae14cff54edb6f7);
    assert(Py_REFCNT(frame_e30ae0a93ae7200d0ae14cff54edb6f7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_deprecated);
        tmp_dict_value_1 = par_deprecated;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        CHECK_OBJECT(par_include_in_schema);
        tmp_dict_value_1 = par_include_in_schema;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_e30ae0a93ae7200d0ae14cff54edb6f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e30ae0a93ae7200d0ae14cff54edb6f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e30ae0a93ae7200d0ae14cff54edb6f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e30ae0a93ae7200d0ae14cff54edb6f7,
        type_description_1,
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
        par_extra
    );


    // Release cached frame if used for exception.
    if (frame_e30ae0a93ae7200d0ae14cff54edb6f7 == cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7);
        cache_frame_e30ae0a93ae7200d0ae14cff54edb6f7 = NULL;
    }

    assertFrameObject(frame_e30ae0a93ae7200d0ae14cff54edb6f7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
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


static PyObject *impl_fastapi$param_functions$$$function__5_Body(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *par_embed = python_pars[1];
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
    struct Nuitka_FrameObject *frame_8beaf1634e0f4bb371b7b717e6836a8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8beaf1634e0f4bb371b7b717e6836a8b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8beaf1634e0f4bb371b7b717e6836a8b)) {
        Py_XDECREF(cache_frame_8beaf1634e0f4bb371b7b717e6836a8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8beaf1634e0f4bb371b7b717e6836a8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8beaf1634e0f4bb371b7b717e6836a8b = MAKE_FUNCTION_FRAME(tstate, codeobj_8beaf1634e0f4bb371b7b717e6836a8b, module_fastapi$param_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8beaf1634e0f4bb371b7b717e6836a8b->m_type_description == NULL);
    frame_8beaf1634e0f4bb371b7b717e6836a8b = cache_frame_8beaf1634e0f4bb371b7b717e6836a8b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8beaf1634e0f4bb371b7b717e6836a8b);
    assert(Py_REFCNT(frame_8beaf1634e0f4bb371b7b717e6836a8b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[22];
        CHECK_OBJECT(par_embed);
        tmp_dict_value_1 = par_embed;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        CHECK_OBJECT(par_media_type);
        tmp_dict_value_1 = par_media_type;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8beaf1634e0f4bb371b7b717e6836a8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8beaf1634e0f4bb371b7b717e6836a8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8beaf1634e0f4bb371b7b717e6836a8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8beaf1634e0f4bb371b7b717e6836a8b,
        type_description_1,
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
        par_extra
    );


    // Release cached frame if used for exception.
    if (frame_8beaf1634e0f4bb371b7b717e6836a8b == cache_frame_8beaf1634e0f4bb371b7b717e6836a8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8beaf1634e0f4bb371b7b717e6836a8b);
        cache_frame_8beaf1634e0f4bb371b7b717e6836a8b = NULL;
    }

    assertFrameObject(frame_8beaf1634e0f4bb371b7b717e6836a8b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
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


static PyObject *impl_fastapi$param_functions$$$function__6_Form(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *par_media_type = python_pars[1];
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
    PyObject *par_extra = python_pars[14];
    struct Nuitka_FrameObject *frame_be965f279a6986fabc6c459bf6c77e30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_be965f279a6986fabc6c459bf6c77e30 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be965f279a6986fabc6c459bf6c77e30)) {
        Py_XDECREF(cache_frame_be965f279a6986fabc6c459bf6c77e30);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be965f279a6986fabc6c459bf6c77e30 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be965f279a6986fabc6c459bf6c77e30 = MAKE_FUNCTION_FRAME(tstate, codeobj_be965f279a6986fabc6c459bf6c77e30, module_fastapi$param_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be965f279a6986fabc6c459bf6c77e30->m_type_description == NULL);
    frame_be965f279a6986fabc6c459bf6c77e30 = cache_frame_be965f279a6986fabc6c459bf6c77e30;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_be965f279a6986fabc6c459bf6c77e30);
    assert(Py_REFCNT(frame_be965f279a6986fabc6c459bf6c77e30) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        CHECK_OBJECT(par_media_type);
        tmp_dict_value_1 = par_media_type;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_be965f279a6986fabc6c459bf6c77e30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be965f279a6986fabc6c459bf6c77e30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be965f279a6986fabc6c459bf6c77e30, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be965f279a6986fabc6c459bf6c77e30,
        type_description_1,
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
        par_extra
    );


    // Release cached frame if used for exception.
    if (frame_be965f279a6986fabc6c459bf6c77e30 == cache_frame_be965f279a6986fabc6c459bf6c77e30) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be965f279a6986fabc6c459bf6c77e30);
        cache_frame_be965f279a6986fabc6c459bf6c77e30 = NULL;
    }

    assertFrameObject(frame_be965f279a6986fabc6c459bf6c77e30);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
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


static PyObject *impl_fastapi$param_functions$$$function__7_File(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *par_media_type = python_pars[1];
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
    PyObject *par_extra = python_pars[14];
    struct Nuitka_FrameObject *frame_22d4713e10e3233a60f565bff9b464ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_22d4713e10e3233a60f565bff9b464ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_22d4713e10e3233a60f565bff9b464ad)) {
        Py_XDECREF(cache_frame_22d4713e10e3233a60f565bff9b464ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22d4713e10e3233a60f565bff9b464ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22d4713e10e3233a60f565bff9b464ad = MAKE_FUNCTION_FRAME(tstate, codeobj_22d4713e10e3233a60f565bff9b464ad, module_fastapi$param_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22d4713e10e3233a60f565bff9b464ad->m_type_description == NULL);
    frame_22d4713e10e3233a60f565bff9b464ad = cache_frame_22d4713e10e3233a60f565bff9b464ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_22d4713e10e3233a60f565bff9b464ad);
    assert(Py_REFCNT(frame_22d4713e10e3233a60f565bff9b464ad) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_default);
        tmp_dict_value_1 = par_default;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        CHECK_OBJECT(par_media_type);
        tmp_dict_value_1 = par_media_type;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_alias);
        tmp_dict_value_1 = par_alias;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_title);
        tmp_dict_value_1 = par_title;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par_description);
        tmp_dict_value_1 = par_description;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par_gt);
        tmp_dict_value_1 = par_gt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        CHECK_OBJECT(par_ge);
        tmp_dict_value_1 = par_ge;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_lt);
        tmp_dict_value_1 = par_lt;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_le);
        tmp_dict_value_1 = par_le;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(par_min_length);
        tmp_dict_value_1 = par_min_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[11];
        CHECK_OBJECT(par_max_length);
        tmp_dict_value_1 = par_max_length;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_regex);
        tmp_dict_value_1 = par_regex;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_example);
        tmp_dict_value_1 = par_example;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_examples);
        tmp_dict_value_1 = par_examples;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_extra);
        tmp_dircall_arg3_1 = par_extra;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_22d4713e10e3233a60f565bff9b464ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22d4713e10e3233a60f565bff9b464ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22d4713e10e3233a60f565bff9b464ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22d4713e10e3233a60f565bff9b464ad,
        type_description_1,
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
        par_extra
    );


    // Release cached frame if used for exception.
    if (frame_22d4713e10e3233a60f565bff9b464ad == cache_frame_22d4713e10e3233a60f565bff9b464ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22d4713e10e3233a60f565bff9b464ad);
        cache_frame_22d4713e10e3233a60f565bff9b464ad = NULL;
    }

    assertFrameObject(frame_22d4713e10e3233a60f565bff9b464ad);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
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


static PyObject *impl_fastapi$param_functions$$$function__8_Depends(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_dependency = python_pars[0];
    PyObject *par_use_cache = python_pars[1];
    struct Nuitka_FrameObject *frame_139a65e8be6dcb72b64067680a83a326;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_139a65e8be6dcb72b64067680a83a326 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_139a65e8be6dcb72b64067680a83a326)) {
        Py_XDECREF(cache_frame_139a65e8be6dcb72b64067680a83a326);

#if _DEBUG_REFCOUNTS
        if (cache_frame_139a65e8be6dcb72b64067680a83a326 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_139a65e8be6dcb72b64067680a83a326 = MAKE_FUNCTION_FRAME(tstate, codeobj_139a65e8be6dcb72b64067680a83a326, module_fastapi$param_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_139a65e8be6dcb72b64067680a83a326->m_type_description == NULL);
    frame_139a65e8be6dcb72b64067680a83a326 = cache_frame_139a65e8be6dcb72b64067680a83a326;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_139a65e8be6dcb72b64067680a83a326);
    assert(Py_REFCNT(frame_139a65e8be6dcb72b64067680a83a326) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[26]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dependency);
        tmp_kw_call_value_0_1 = par_dependency;
        CHECK_OBJECT(par_use_cache);
        tmp_kw_call_value_1_1 = par_use_cache;
        frame_139a65e8be6dcb72b64067680a83a326->m_frame.f_lineno = 281;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[27]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
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
        exception_tb = MAKE_TRACEBACK(frame_139a65e8be6dcb72b64067680a83a326, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_139a65e8be6dcb72b64067680a83a326->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_139a65e8be6dcb72b64067680a83a326, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_139a65e8be6dcb72b64067680a83a326,
        type_description_1,
        par_dependency,
        par_use_cache
    );


    // Release cached frame if used for exception.
    if (frame_139a65e8be6dcb72b64067680a83a326 == cache_frame_139a65e8be6dcb72b64067680a83a326) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_139a65e8be6dcb72b64067680a83a326);
        cache_frame_139a65e8be6dcb72b64067680a83a326 = NULL;
    }

    assertFrameObject(frame_139a65e8be6dcb72b64067680a83a326);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dependency);
    Py_DECREF(par_dependency);
    CHECK_OBJECT(par_use_cache);
    Py_DECREF(par_use_cache);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
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


static PyObject *impl_fastapi$param_functions$$$function__9_Security(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_dependency = python_pars[0];
    PyObject *par_scopes = python_pars[1];
    PyObject *par_use_cache = python_pars[2];
    struct Nuitka_FrameObject *frame_1df43e327f8e05ac02536cc63f676d52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1df43e327f8e05ac02536cc63f676d52 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1df43e327f8e05ac02536cc63f676d52)) {
        Py_XDECREF(cache_frame_1df43e327f8e05ac02536cc63f676d52);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1df43e327f8e05ac02536cc63f676d52 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1df43e327f8e05ac02536cc63f676d52 = MAKE_FUNCTION_FRAME(tstate, codeobj_1df43e327f8e05ac02536cc63f676d52, module_fastapi$param_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1df43e327f8e05ac02536cc63f676d52->m_type_description == NULL);
    frame_1df43e327f8e05ac02536cc63f676d52 = cache_frame_1df43e327f8e05ac02536cc63f676d52;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1df43e327f8e05ac02536cc63f676d52);
    assert(Py_REFCNT(frame_1df43e327f8e05ac02536cc63f676d52) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dependency);
        tmp_kw_call_value_0_1 = par_dependency;
        CHECK_OBJECT(par_scopes);
        tmp_kw_call_value_1_1 = par_scopes;
        CHECK_OBJECT(par_use_cache);
        tmp_kw_call_value_2_1 = par_use_cache;
        frame_1df43e327f8e05ac02536cc63f676d52->m_frame.f_lineno = 290;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1df43e327f8e05ac02536cc63f676d52, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1df43e327f8e05ac02536cc63f676d52->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1df43e327f8e05ac02536cc63f676d52, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1df43e327f8e05ac02536cc63f676d52,
        type_description_1,
        par_dependency,
        par_scopes,
        par_use_cache
    );


    // Release cached frame if used for exception.
    if (frame_1df43e327f8e05ac02536cc63f676d52 == cache_frame_1df43e327f8e05ac02536cc63f676d52) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1df43e327f8e05ac02536cc63f676d52);
        cache_frame_1df43e327f8e05ac02536cc63f676d52 = NULL;
    }

    assertFrameObject(frame_1df43e327f8e05ac02536cc63f676d52);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
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



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__1_Path(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__1_Path,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96201a5b6a7b7b3b009ac19f26b33ef7,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__2_Query(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__2_Query,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b836fdb6d9bc12be387c61b4fb20607f,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__3_Header(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__3_Header,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1fbba4144e4b9abd5c72ff3cf6b669ae,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__4_Cookie(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__4_Cookie,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e30ae0a93ae7200d0ae14cff54edb6f7,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__5_Body(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__5_Body,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8beaf1634e0f4bb371b7b717e6836a8b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__6_Form(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__6_Form,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be965f279a6986fabc6c459bf6c77e30,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__7_File(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__7_File,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22d4713e10e3233a60f565bff9b464ad,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__8_Depends(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__8_Depends,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_139a65e8be6dcb72b64067680a83a326,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastapi$param_functions$$$function__9_Security(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastapi$param_functions$$$function__9_Security,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1df43e327f8e05ac02536cc63f676d52,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_fastapi$param_functions,
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

function_impl_code functable_fastapi$param_functions[] = {
    impl_fastapi$param_functions$$$function__1_Path,
    impl_fastapi$param_functions$$$function__2_Query,
    impl_fastapi$param_functions$$$function__3_Header,
    impl_fastapi$param_functions$$$function__4_Cookie,
    impl_fastapi$param_functions$$$function__5_Body,
    impl_fastapi$param_functions$$$function__6_Form,
    impl_fastapi$param_functions$$$function__7_File,
    impl_fastapi$param_functions$$$function__8_Depends,
    impl_fastapi$param_functions$$$function__9_Security,
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

    function_impl_code *current = functable_fastapi$param_functions;
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

    if (offset > sizeof(functable_fastapi$param_functions) || offset < 0) {
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
        functable_fastapi$param_functions[offset],
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
        module_fastapi$param_functions,
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
PyObject *modulecode_fastapi$param_functions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("fastapi.param_functions");

    // Store the module for future use.
    module_fastapi$param_functions = module;

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
        PRINT_STRING("fastapi.param_functions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("fastapi.param_functions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initfastapi$param_functions\n");

    moduledict_fastapi$param_functions = MODULE_DICT(module_fastapi$param_functions);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_fastapi$param_functions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_fastapi$param_functions,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[65]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_fastapi$param_functions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_fastapi$param_functions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_fastapi$param_functions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_fastapi$param_functions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_fastapi$param_functions);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a1f6307b7714050e7aa3faea27465045;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_2);
    }
    frame_a1f6307b7714050e7aa3faea27465045 = MAKE_MODULE_FRAME(codeobj_a1f6307b7714050e7aa3faea27465045, module_fastapi$param_functions);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a1f6307b7714050e7aa3faea27465045);
    assert(Py_REFCNT(frame_a1f6307b7714050e7aa3faea27465045) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_fastapi$param_functions,
                mod_consts[36],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[36]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_fastapi$param_functions,
                mod_consts[38],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[38]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_6);
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
                (PyObject *)moduledict_fastapi$param_functions,
                mod_consts[39],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[39]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_7);
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
                (PyObject *)moduledict_fastapi$param_functions,
                mod_consts[40],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[40]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_8);
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
                (PyObject *)moduledict_fastapi$param_functions,
                mod_consts[41],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[41]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[42];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_fastapi$param_functions;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[43];
        tmp_level_value_1 = mod_consts[37];
        frame_a1f6307b7714050e7aa3faea27465045->m_frame.f_lineno = 3;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_fastapi$param_functions,
                mod_consts[0],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[44];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_fastapi$param_functions;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[45];
        tmp_level_value_2 = mod_consts[37];
        frame_a1f6307b7714050e7aa3faea27465045->m_frame.f_lineno = 4;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_fastapi$param_functions,
                mod_consts[46],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_defaults_1 = mod_consts[47];
        tmp_dict_key_1 = mod_consts[3];
        tmp_dict_value_1 = Py_None;
        tmp_kw_defaults_1 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = Py_None;
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
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        assert(!(tmp_dict_value_1 == NULL));
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
        tmp_dict_value_1 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[2];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 17 );
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[3];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[4];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[5];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[6];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_4 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[7];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_5 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[8];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_6 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[9];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_7 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[10];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[11];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_9 = (PyObject *)&PyLong_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[12];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[13];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[14];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_1);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_subscript_value_12);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_subscript_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[15];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_13);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[16];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[48];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[49];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_12 = MAKE_FUNCTION_fastapi$param_functions$$$function__1_Path(tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);
        tmp_dict_key_3 = mod_consts[3];
        tmp_dict_value_3 = Py_None;
        tmp_kw_defaults_2 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[4];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[5];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[6];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[7];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[8];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[9];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[10];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[11];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[12];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[13];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[14];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[15];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[16];
        tmp_dict_value_3 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_defaults_2);
        Py_DECREF(tmp_kw_defaults_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        tmp_dict_key_4 = mod_consts[2];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_2);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 17 );
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_26;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[3];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_14);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[4];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_15 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_15);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[5];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_16);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[6];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_17 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_17);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[7];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_18 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_18);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[8];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_19 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_19);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[9];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_20 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_20);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[10];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_21 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_21);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[11];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_22 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_22);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[12];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_23);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[13];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[14];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_3;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_3;
            }
            tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_3);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_25);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_subscript_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_25);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_subscript_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_3;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_24);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[15];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_26 = (PyObject *)&PyBool_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_26);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[16];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[48];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[49];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_defaults_2);
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_13 = MAKE_FUNCTION_fastapi$param_functions$$$function__2_Query(tmp_defaults_2, tmp_kw_defaults_2, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_defaults_3;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_4);
        tmp_dict_key_5 = mod_consts[3];
        tmp_dict_value_5 = Py_None;
        tmp_kw_defaults_3 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[19];
        tmp_dict_value_5 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[4];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[5];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[6];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[7];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[8];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[9];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[10];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[11];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[12];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[13];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[14];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[15];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[16];
        tmp_dict_value_5 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_defaults_3);
        Py_DECREF(tmp_kw_defaults_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        tmp_dict_key_6 = mod_consts[2];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_3);
            Py_DECREF(tmp_kw_defaults_3);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 18 );
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_39;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[3];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_27);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[19];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[4];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_28);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[5];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_29 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_29);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[6];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_30 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_30);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[7];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_31 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_31);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[8];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_32 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_32);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[9];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_33 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_33);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[10];
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_34 = (PyObject *)&PyLong_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_34);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[11];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_35 = (PyObject *)&PyLong_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_35);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[12];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_36 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_36);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[13];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[14];
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_5;
            }
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_5;
            }
            tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 1, tmp_tuple_element_5);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_value_38);
            goto dict_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_38);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_subscript_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_5;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_37);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[15];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_39 = (PyObject *)&PyBool_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_39);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[16];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[48];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[49];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_defaults_3);
        Py_DECREF(tmp_kw_defaults_3);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_14 = MAKE_FUNCTION_fastapi$param_functions$$$function__3_Header(tmp_defaults_3, tmp_kw_defaults_3, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_defaults_4;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_6);
        tmp_dict_key_7 = mod_consts[3];
        tmp_dict_value_7 = Py_None;
        tmp_kw_defaults_4 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[4];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[5];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[6];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[7];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[8];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[9];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[10];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[11];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[12];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[13];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[14];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[15];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[16];
        tmp_dict_value_7 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_defaults_4);
        Py_DECREF(tmp_kw_defaults_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        tmp_dict_key_8 = mod_consts[2];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_4);
            Py_DECREF(tmp_kw_defaults_4);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 17 );
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_52;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[3];
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_40 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_40);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[4];
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_41 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_41);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[5];
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_42 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_42);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[6];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_43 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_43);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[7];
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_44 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_44);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[8];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_45 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_45);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[9];
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_46 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_46);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[10];
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_47 = (PyObject *)&PyLong_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_47);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[11];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_48 = (PyObject *)&PyLong_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_48);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[12];
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_49 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_49);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[13];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[14];
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_7;
            }
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_7;
            }
            tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_51 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_51, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_51, 1, tmp_tuple_element_7);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_value_51);
            goto dict_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_subscript_value_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_51);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_subscript_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_7;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_50);
            Py_DECREF(tmp_subscript_value_50);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[15];
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_52 = (PyObject *)&PyBool_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_52);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[16];
            tmp_dict_value_8 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[48];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[49];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_defaults_4);
        Py_DECREF(tmp_kw_defaults_4);
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_assign_source_15 = MAKE_FUNCTION_fastapi$param_functions$$$function__4_Cookie(tmp_defaults_4, tmp_kw_defaults_4, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kw_defaults_5;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_8);
        tmp_dict_key_9 = mod_consts[22];
        tmp_dict_value_9 = Py_False;
        tmp_kw_defaults_5 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[23];
        tmp_dict_value_9 = mod_consts[50];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[3];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[4];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[5];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[6];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[7];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[8];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[9];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[10];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[11];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[12];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[13];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[14];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_defaults_5);
        Py_DECREF(tmp_kw_defaults_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        tmp_dict_key_10 = mod_consts[2];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_5);
            Py_DECREF(tmp_kw_defaults_5);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 17 );
        {
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_54;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_64;
            PyObject *tmp_tuple_element_9;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[22];
            tmp_dict_value_10 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[23];
            tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[3];
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_53 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_53);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[4];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_54 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_54);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[5];
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_55 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_55);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[6];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_56 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_56);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[7];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_57 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_57);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[8];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_58 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_58);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[9];
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_59 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_59);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[10];
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_60 = (PyObject *)&PyLong_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_60);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[11];
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_61 = (PyObject *)&PyLong_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_61);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[12];
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_62 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_62);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[13];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[14];
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_9;
            }
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_9;
            }
            tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_64 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_64, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_64, 1, tmp_tuple_element_9);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_value_64);
            goto dict_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_subscript_value_63 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_64);
            Py_DECREF(tmp_subscript_value_64);
            if (tmp_subscript_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_9;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_63);
            Py_DECREF(tmp_subscript_value_63);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[48];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[49];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_defaults_5);
        Py_DECREF(tmp_kw_defaults_5);
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_assign_source_16 = MAKE_FUNCTION_fastapi$param_functions$$$function__5_Body(tmp_defaults_5, tmp_kw_defaults_5, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_6;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_defaults_6;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_10);
        tmp_dict_key_11 = mod_consts[23];
        tmp_dict_value_11 = mod_consts[51];
        tmp_kw_defaults_6 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[3];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[4];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[5];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[6];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[7];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[8];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[9];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[10];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[11];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[12];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[13];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[14];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_defaults_6);
        Py_DECREF(tmp_kw_defaults_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        tmp_dict_key_12 = mod_consts[2];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_6);
            Py_DECREF(tmp_kw_defaults_6);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 16 );
        {
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_65;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_67;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_subscript_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_76;
            PyObject *tmp_tuple_element_11;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[23];
            tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[3];
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_65 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_65);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[4];
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_66 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_66);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[5];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_67 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_67);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[6];
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_68 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_68);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[7];
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_69 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_69);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[8];
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_70 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_70);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[9];
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_71 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_71);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[10];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_72 = (PyObject *)&PyLong_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_72);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[11];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_73 = (PyObject *)&PyLong_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_73);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[12];
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_74 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_74);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[13];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[14];
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_11;
            }
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_11;
            }
            tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_76 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_76, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_76, 1, tmp_tuple_element_11);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_subscript_value_76);
            goto dict_build_exception_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_subscript_value_75 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_76);
            Py_DECREF(tmp_subscript_value_76);
            if (tmp_subscript_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_11;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_75);
            Py_DECREF(tmp_subscript_value_75);
            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[48];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[49];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_defaults_6);
        Py_DECREF(tmp_kw_defaults_6);
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_assign_source_17 = MAKE_FUNCTION_fastapi$param_functions$$$function__6_Form(tmp_defaults_6, tmp_kw_defaults_6, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kw_defaults_7;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_12);
        tmp_dict_key_13 = mod_consts[23];
        tmp_dict_value_13 = mod_consts[52];
        tmp_kw_defaults_7 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[3];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[4];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[5];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[6];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[7];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[8];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[9];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[10];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[11];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[12];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[13];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[14];
        tmp_dict_value_13 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_defaults_7);
        Py_DECREF(tmp_kw_defaults_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;
        tmp_dict_key_14 = mod_consts[2];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_7);
            Py_DECREF(tmp_kw_defaults_7);

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 16 );
        {
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_subscript_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_subscript_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_subscript_value_88;
            PyObject *tmp_tuple_element_13;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[23];
            tmp_dict_value_14 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[3];
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_77 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_77);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[4];
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_78 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_78);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[5];
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_79 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_79);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[6];
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_80 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_80);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[7];
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_81 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_81);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[8];
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_82 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_82);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[9];
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_83 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_83);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[10];
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_84 = (PyObject *)&PyLong_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_84);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[11];
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_85 = (PyObject *)&PyLong_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_85);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[12];
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_86 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_86, tmp_subscript_value_86);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[13];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[14];
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_13;
            }
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_13;
            }
            tmp_tuple_element_13 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_88 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_88, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_88, 1, tmp_tuple_element_13);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_value_88);
            goto dict_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_subscript_value_87 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_88, tmp_subscript_value_88);
            Py_DECREF(tmp_subscript_value_88);
            if (tmp_subscript_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_13;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_87);
            Py_DECREF(tmp_subscript_value_87);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[48];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[49];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_defaults_7);
        Py_DECREF(tmp_kw_defaults_7);
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;


        tmp_assign_source_18 = MAKE_FUNCTION_fastapi$param_functions$$$function__7_File(tmp_defaults_7, tmp_kw_defaults_7, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_8;
        PyObject *tmp_kw_defaults_8;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_90;
        PyObject *tmp_tuple_element_14;
        tmp_defaults_8 = mod_consts[53];
        tmp_kw_defaults_8 = DICT_COPY(mod_consts[54]);
        tmp_dict_key_15 = mod_consts[55];
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_8);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_8);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = Py_Ellipsis;
        tmp_subscript_value_90 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_90, 0, tmp_tuple_element_14);
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_90, 1, tmp_tuple_element_14);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_kw_defaults_8);
        Py_DECREF(tmp_subscript_value_90);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_subscript_value_89 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_90, tmp_subscript_value_90);
        Py_DECREF(tmp_subscript_value_90);
        if (tmp_subscript_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_8);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_89);
        Py_DECREF(tmp_subscript_value_89);
        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_8);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[56];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[49];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_kw_defaults_8);
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_19 = MAKE_FUNCTION_fastapi$param_functions$$$function__8_Depends(tmp_defaults_8, tmp_kw_defaults_8, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_9;
        PyObject *tmp_kw_defaults_9;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_subscript_value_92;
        PyObject *tmp_tuple_element_15;
        tmp_defaults_9 = mod_consts[53];
        tmp_kw_defaults_9 = DICT_COPY(mod_consts[57]);
        tmp_dict_key_16 = mod_consts[55];
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_9);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_9);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_15 = Py_Ellipsis;
        tmp_subscript_value_92 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_92, 0, tmp_tuple_element_15);
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_92, 1, tmp_tuple_element_15);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_kw_defaults_9);
        Py_DECREF(tmp_subscript_value_92);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_subscript_value_91 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_92);
        Py_DECREF(tmp_subscript_value_92);
        if (tmp_subscript_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_9);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_91, tmp_subscript_value_91);
        Py_DECREF(tmp_subscript_value_91);
        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_9);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_93;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_subscript_value_94;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[58];
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_15;
            }
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_15;
            }
            tmp_subscript_value_94 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_93 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_94);
            if (tmp_subscript_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_15;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_93);
            Py_DECREF(tmp_subscript_value_93);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[56];
            tmp_dict_value_16 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[49];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_kw_defaults_9);
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_20 = MAKE_FUNCTION_fastapi$param_functions$$$function__9_Security(tmp_defaults_9, tmp_kw_defaults_9, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_fastapi$param_functions, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_20);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a1f6307b7714050e7aa3faea27465045, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a1f6307b7714050e7aa3faea27465045->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a1f6307b7714050e7aa3faea27465045, exception_lineno);
    }



    assertFrameObject(frame_a1f6307b7714050e7aa3faea27465045);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("fastapi.param_functions", false);

    Py_INCREF(module_fastapi$param_functions);
    return module_fastapi$param_functions;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastapi$param_functions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("fastapi$param_functions", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
