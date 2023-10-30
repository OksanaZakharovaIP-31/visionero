/* Generated code for Python module 'uvicorn.main'
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

/* The "module_uvicorn$main" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_uvicorn$main;
PyDictObject *moduledict_uvicorn$main;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[238];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[238];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("uvicorn.main"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 238; i++) {
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
void checkModuleConstants_uvicorn$main(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 238; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c5b72ebb35a2087d5a3f7752f30acc31;
static PyCodeObject *codeobj_01258ae461c8447ed13566b58a9d7cab;
static PyCodeObject *codeobj_64b3aac55c9c36e38e37e9f4a90c1996;
static PyCodeObject *codeobj_fab1bd0849517409354a0a240d92ef8e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[233]); CHECK_OBJECT(module_filename_obj);
    codeobj_c5b72ebb35a2087d5a3f7752f30acc31 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[234], mod_consts[234], NULL, NULL, 0, 0, 0);
    codeobj_01258ae461c8447ed13566b58a9d7cab = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[212], mod_consts[212], mod_consts[235], NULL, 45, 0, 0);
    codeobj_64b3aac55c9c36e38e37e9f4a90c1996 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[236], NULL, 3, 0, 0);
    codeobj_fab1bd0849517409354a0a240d92ef8e = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[237], NULL, 1, 44, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__1_print_version(PyObject *annotations);


static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__2_main(PyObject *annotations);


static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__3_run(PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_uvicorn$main$$$function__1_print_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_param = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_64b3aac55c9c36e38e37e9f4a90c1996;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_64b3aac55c9c36e38e37e9f4a90c1996 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_64b3aac55c9c36e38e37e9f4a90c1996)) {
        Py_XDECREF(cache_frame_64b3aac55c9c36e38e37e9f4a90c1996);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64b3aac55c9c36e38e37e9f4a90c1996 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64b3aac55c9c36e38e37e9f4a90c1996 = MAKE_FUNCTION_FRAME(tstate, codeobj_64b3aac55c9c36e38e37e9f4a90c1996, module_uvicorn$main, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64b3aac55c9c36e38e37e9f4a90c1996->m_type_description == NULL);
    frame_64b3aac55c9c36e38e37e9f4a90c1996 = cache_frame_64b3aac55c9c36e38e37e9f4a90c1996;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_64b3aac55c9c36e38e37e9f4a90c1996);
    assert(Py_REFCNT(frame_64b3aac55c9c36e38e37e9f4a90c1996) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_value);
        tmp_operand_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_1 = par_ctx;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[3];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[5]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            frame_64b3aac55c9c36e38e37e9f4a90c1996->m_frame.f_lineno = 53;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[7]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            frame_64b3aac55c9c36e38e37e9f4a90c1996->m_frame.f_lineno = 54;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[8]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            frame_64b3aac55c9c36e38e37e9f4a90c1996->m_frame.f_lineno = 55;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[9]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_64b3aac55c9c36e38e37e9f4a90c1996->m_frame.f_lineno = 49;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        if (par_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_ctx;
        frame_64b3aac55c9c36e38e37e9f4a90c1996->m_frame.f_lineno = 58;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[11]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_64b3aac55c9c36e38e37e9f4a90c1996, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64b3aac55c9c36e38e37e9f4a90c1996->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64b3aac55c9c36e38e37e9f4a90c1996, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64b3aac55c9c36e38e37e9f4a90c1996,
        type_description_1,
        par_ctx,
        par_param,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_64b3aac55c9c36e38e37e9f4a90c1996 == cache_frame_64b3aac55c9c36e38e37e9f4a90c1996) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64b3aac55c9c36e38e37e9f4a90c1996);
        cache_frame_64b3aac55c9c36e38e37e9f4a90c1996 = NULL;
    }

    assertFrameObject(frame_64b3aac55c9c36e38e37e9f4a90c1996);

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
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_uvicorn$main$$$function__2_main(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_app = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_uds = python_pars[3];
    PyObject *par_fd = python_pars[4];
    PyObject *par_loop = python_pars[5];
    PyObject *par_http = python_pars[6];
    PyObject *par_ws = python_pars[7];
    PyObject *par_ws_max_size = python_pars[8];
    PyObject *par_ws_ping_interval = python_pars[9];
    PyObject *par_ws_ping_timeout = python_pars[10];
    PyObject *par_ws_per_message_deflate = python_pars[11];
    PyObject *par_lifespan = python_pars[12];
    PyObject *par_interface = python_pars[13];
    PyObject *par_reload = python_pars[14];
    PyObject *par_reload_dirs = python_pars[15];
    PyObject *par_reload_includes = python_pars[16];
    PyObject *par_reload_excludes = python_pars[17];
    PyObject *par_reload_delay = python_pars[18];
    PyObject *par_workers = python_pars[19];
    PyObject *par_env_file = python_pars[20];
    PyObject *par_log_config = python_pars[21];
    PyObject *par_log_level = python_pars[22];
    PyObject *par_access_log = python_pars[23];
    PyObject *par_proxy_headers = python_pars[24];
    PyObject *par_server_header = python_pars[25];
    PyObject *par_date_header = python_pars[26];
    PyObject *par_forwarded_allow_ips = python_pars[27];
    PyObject *par_root_path = python_pars[28];
    PyObject *par_limit_concurrency = python_pars[29];
    PyObject *par_backlog = python_pars[30];
    PyObject *par_limit_max_requests = python_pars[31];
    PyObject *par_timeout_keep_alive = python_pars[32];
    PyObject *par_ssl_keyfile = python_pars[33];
    PyObject *par_ssl_certfile = python_pars[34];
    PyObject *par_ssl_keyfile_password = python_pars[35];
    PyObject *par_ssl_version = python_pars[36];
    PyObject *par_ssl_cert_reqs = python_pars[37];
    PyObject *par_ssl_ca_certs = python_pars[38];
    PyObject *par_ssl_ciphers = python_pars[39];
    PyObject *par_headers = python_pars[40];
    PyObject *par_use_colors = python_pars[41];
    PyObject *par_app_dir = python_pars[42];
    PyObject *par_h11_max_incomplete_event_size = python_pars[43];
    PyObject *par_factory = python_pars[44];
    PyObject *outline_0_var_header = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_01258ae461c8447ed13566b58a9d7cab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_01258ae461c8447ed13566b58a9d7cab = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_01258ae461c8447ed13566b58a9d7cab)) {
        Py_XDECREF(cache_frame_01258ae461c8447ed13566b58a9d7cab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01258ae461c8447ed13566b58a9d7cab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01258ae461c8447ed13566b58a9d7cab = MAKE_FUNCTION_FRAME(tstate, codeobj_01258ae461c8447ed13566b58a9d7cab, module_uvicorn$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01258ae461c8447ed13566b58a9d7cab->m_type_description == NULL);
    frame_01258ae461c8447ed13566b58a9d7cab = cache_frame_01258ae461c8447ed13566b58a9d7cab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_01258ae461c8447ed13566b58a9d7cab);
    assert(Py_REFCNT(frame_01258ae461c8447ed13566b58a9d7cab) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_kw_call_dict_value_14_1;
        PyObject *tmp_kw_call_dict_value_15_1;
        PyObject *tmp_kw_call_dict_value_16_1;
        PyObject *tmp_kw_call_dict_value_17_1;
        PyObject *tmp_kw_call_dict_value_18_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_kw_call_dict_value_19_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_kw_call_dict_value_20_1;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_kw_call_dict_value_21_1;
        PyObject *tmp_kw_call_dict_value_22_1;
        PyObject *tmp_kw_call_dict_value_23_1;
        PyObject *tmp_kw_call_dict_value_24_1;
        PyObject *tmp_kw_call_dict_value_25_1;
        PyObject *tmp_kw_call_dict_value_26_1;
        PyObject *tmp_kw_call_dict_value_27_1;
        PyObject *tmp_kw_call_dict_value_28_1;
        PyObject *tmp_kw_call_dict_value_29_1;
        PyObject *tmp_kw_call_dict_value_30_1;
        PyObject *tmp_kw_call_dict_value_31_1;
        PyObject *tmp_kw_call_dict_value_32_1;
        PyObject *tmp_kw_call_dict_value_33_1;
        PyObject *tmp_kw_call_dict_value_34_1;
        PyObject *tmp_kw_call_dict_value_35_1;
        PyObject *tmp_kw_call_dict_value_36_1;
        PyObject *tmp_kw_call_dict_value_37_1;
        PyObject *tmp_kw_call_dict_value_38_1;
        PyObject *tmp_kw_call_dict_value_39_1;
        PyObject *tmp_kw_call_dict_value_40_1;
        PyObject *tmp_kw_call_dict_value_41_1;
        PyObject *tmp_kw_call_dict_value_42_1;
        PyObject *tmp_kw_call_dict_value_43_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_app);
        tmp_kw_call_arg_value_0_1 = par_app;
        CHECK_OBJECT(par_host);
        tmp_kw_call_dict_value_0_1 = par_host;
        CHECK_OBJECT(par_port);
        tmp_kw_call_dict_value_1_1 = par_port;
        CHECK_OBJECT(par_uds);
        tmp_kw_call_dict_value_2_1 = par_uds;
        CHECK_OBJECT(par_fd);
        tmp_kw_call_dict_value_3_1 = par_fd;
        CHECK_OBJECT(par_loop);
        tmp_kw_call_dict_value_4_1 = par_loop;
        CHECK_OBJECT(par_http);
        tmp_kw_call_dict_value_5_1 = par_http;
        CHECK_OBJECT(par_ws);
        tmp_kw_call_dict_value_6_1 = par_ws;
        CHECK_OBJECT(par_ws_max_size);
        tmp_kw_call_dict_value_7_1 = par_ws_max_size;
        CHECK_OBJECT(par_ws_ping_interval);
        tmp_kw_call_dict_value_8_1 = par_ws_ping_interval;
        CHECK_OBJECT(par_ws_ping_timeout);
        tmp_kw_call_dict_value_9_1 = par_ws_ping_timeout;
        CHECK_OBJECT(par_ws_per_message_deflate);
        tmp_kw_call_dict_value_10_1 = par_ws_per_message_deflate;
        CHECK_OBJECT(par_lifespan);
        tmp_kw_call_dict_value_11_1 = par_lifespan;
        CHECK_OBJECT(par_env_file);
        tmp_kw_call_dict_value_12_1 = par_env_file;
        CHECK_OBJECT(par_log_config);
        tmp_cmp_expr_left_1 = par_log_config;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_kw_call_dict_value_13_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_kw_call_dict_value_13_1 == NULL)) {
            tmp_kw_call_dict_value_13_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_kw_call_dict_value_13_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_log_config);
        tmp_kw_call_dict_value_13_1 = par_log_config;
        condexpr_end_1:;
        CHECK_OBJECT(par_log_level);
        tmp_kw_call_dict_value_14_1 = par_log_level;
        CHECK_OBJECT(par_access_log);
        tmp_kw_call_dict_value_15_1 = par_access_log;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_16_1 = par_interface;
        CHECK_OBJECT(par_reload);
        tmp_kw_call_dict_value_17_1 = par_reload;
        CHECK_OBJECT(par_reload_dirs);
        tmp_or_left_value_1 = par_reload_dirs;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = Py_None;
        tmp_kw_call_dict_value_18_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_kw_call_dict_value_18_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_reload_includes);
        tmp_or_left_value_2 = par_reload_includes;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = Py_None;
        tmp_kw_call_dict_value_19_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_kw_call_dict_value_19_1 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(par_reload_excludes);
        tmp_or_left_value_3 = par_reload_excludes;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = Py_None;
        tmp_kw_call_dict_value_20_1 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_kw_call_dict_value_20_1 = tmp_or_left_value_3;
        or_end_3:;
        CHECK_OBJECT(par_reload_delay);
        tmp_kw_call_dict_value_21_1 = par_reload_delay;
        CHECK_OBJECT(par_workers);
        tmp_kw_call_dict_value_22_1 = par_workers;
        CHECK_OBJECT(par_proxy_headers);
        tmp_kw_call_dict_value_23_1 = par_proxy_headers;
        CHECK_OBJECT(par_server_header);
        tmp_kw_call_dict_value_24_1 = par_server_header;
        CHECK_OBJECT(par_date_header);
        tmp_kw_call_dict_value_25_1 = par_date_header;
        CHECK_OBJECT(par_forwarded_allow_ips);
        tmp_kw_call_dict_value_26_1 = par_forwarded_allow_ips;
        CHECK_OBJECT(par_root_path);
        tmp_kw_call_dict_value_27_1 = par_root_path;
        CHECK_OBJECT(par_limit_concurrency);
        tmp_kw_call_dict_value_28_1 = par_limit_concurrency;
        CHECK_OBJECT(par_backlog);
        tmp_kw_call_dict_value_29_1 = par_backlog;
        CHECK_OBJECT(par_limit_max_requests);
        tmp_kw_call_dict_value_30_1 = par_limit_max_requests;
        CHECK_OBJECT(par_timeout_keep_alive);
        tmp_kw_call_dict_value_31_1 = par_timeout_keep_alive;
        CHECK_OBJECT(par_ssl_keyfile);
        tmp_kw_call_dict_value_32_1 = par_ssl_keyfile;
        CHECK_OBJECT(par_ssl_certfile);
        tmp_kw_call_dict_value_33_1 = par_ssl_certfile;
        CHECK_OBJECT(par_ssl_keyfile_password);
        tmp_kw_call_dict_value_34_1 = par_ssl_keyfile_password;
        CHECK_OBJECT(par_ssl_version);
        tmp_kw_call_dict_value_35_1 = par_ssl_version;
        CHECK_OBJECT(par_ssl_cert_reqs);
        tmp_kw_call_dict_value_36_1 = par_ssl_cert_reqs;
        CHECK_OBJECT(par_ssl_ca_certs);
        tmp_kw_call_dict_value_37_1 = par_ssl_ca_certs;
        CHECK_OBJECT(par_ssl_ciphers);
        tmp_kw_call_dict_value_38_1 = par_ssl_ciphers;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_headers);
            tmp_iter_arg_1 = par_headers;
            tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 444;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_header;
                outline_0_var_header = tmp_assign_source_4;
                Py_INCREF(outline_0_var_header);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_header);
            tmp_expression_value_1 = outline_0_var_header;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_01258ae461c8447ed13566b58a9d7cab->m_frame.f_lineno = 444;
            tmp_append_value_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[15]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_kw_call_dict_value_39_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_kw_call_dict_value_39_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_header);
        outline_0_var_header = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_header);
        outline_0_var_header = NULL;
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
        exception_lineno = 444;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_use_colors);
        tmp_kw_call_dict_value_40_1 = par_use_colors;
        CHECK_OBJECT(par_factory);
        tmp_kw_call_dict_value_41_1 = par_factory;
        CHECK_OBJECT(par_app_dir);
        tmp_kw_call_dict_value_42_1 = par_app_dir;
        CHECK_OBJECT(par_h11_max_incomplete_event_size);
        tmp_kw_call_dict_value_43_1 = par_h11_max_incomplete_event_size;
        frame_01258ae461c8447ed13566b58a9d7cab->m_frame.f_lineno = 403;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[44] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1, tmp_kw_call_dict_value_26_1, tmp_kw_call_dict_value_27_1, tmp_kw_call_dict_value_28_1, tmp_kw_call_dict_value_29_1, tmp_kw_call_dict_value_30_1, tmp_kw_call_dict_value_31_1, tmp_kw_call_dict_value_32_1, tmp_kw_call_dict_value_33_1, tmp_kw_call_dict_value_34_1, tmp_kw_call_dict_value_35_1, tmp_kw_call_dict_value_36_1, tmp_kw_call_dict_value_37_1, tmp_kw_call_dict_value_38_1, tmp_kw_call_dict_value_39_1, tmp_kw_call_dict_value_40_1, tmp_kw_call_dict_value_41_1, tmp_kw_call_dict_value_42_1, tmp_kw_call_dict_value_43_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_39_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01258ae461c8447ed13566b58a9d7cab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01258ae461c8447ed13566b58a9d7cab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01258ae461c8447ed13566b58a9d7cab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01258ae461c8447ed13566b58a9d7cab,
        type_description_1,
        par_app,
        par_host,
        par_port,
        par_uds,
        par_fd,
        par_loop,
        par_http,
        par_ws,
        par_ws_max_size,
        par_ws_ping_interval,
        par_ws_ping_timeout,
        par_ws_per_message_deflate,
        par_lifespan,
        par_interface,
        par_reload,
        par_reload_dirs,
        par_reload_includes,
        par_reload_excludes,
        par_reload_delay,
        par_workers,
        par_env_file,
        par_log_config,
        par_log_level,
        par_access_log,
        par_proxy_headers,
        par_server_header,
        par_date_header,
        par_forwarded_allow_ips,
        par_root_path,
        par_limit_concurrency,
        par_backlog,
        par_limit_max_requests,
        par_timeout_keep_alive,
        par_ssl_keyfile,
        par_ssl_certfile,
        par_ssl_keyfile_password,
        par_ssl_version,
        par_ssl_cert_reqs,
        par_ssl_ca_certs,
        par_ssl_ciphers,
        par_headers,
        par_use_colors,
        par_app_dir,
        par_h11_max_incomplete_event_size,
        par_factory
    );


    // Release cached frame if used for exception.
    if (frame_01258ae461c8447ed13566b58a9d7cab == cache_frame_01258ae461c8447ed13566b58a9d7cab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01258ae461c8447ed13566b58a9d7cab);
        cache_frame_01258ae461c8447ed13566b58a9d7cab = NULL;
    }

    assertFrameObject(frame_01258ae461c8447ed13566b58a9d7cab);

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
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_fd);
    Py_DECREF(par_fd);
    CHECK_OBJECT(par_loop);
    Py_DECREF(par_loop);
    CHECK_OBJECT(par_http);
    Py_DECREF(par_http);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_ws_max_size);
    Py_DECREF(par_ws_max_size);
    CHECK_OBJECT(par_ws_ping_interval);
    Py_DECREF(par_ws_ping_interval);
    CHECK_OBJECT(par_ws_ping_timeout);
    Py_DECREF(par_ws_ping_timeout);
    CHECK_OBJECT(par_ws_per_message_deflate);
    Py_DECREF(par_ws_per_message_deflate);
    CHECK_OBJECT(par_lifespan);
    Py_DECREF(par_lifespan);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    CHECK_OBJECT(par_reload);
    Py_DECREF(par_reload);
    CHECK_OBJECT(par_reload_dirs);
    Py_DECREF(par_reload_dirs);
    CHECK_OBJECT(par_reload_includes);
    Py_DECREF(par_reload_includes);
    CHECK_OBJECT(par_reload_excludes);
    Py_DECREF(par_reload_excludes);
    CHECK_OBJECT(par_reload_delay);
    Py_DECREF(par_reload_delay);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_env_file);
    Py_DECREF(par_env_file);
    CHECK_OBJECT(par_log_config);
    Py_DECREF(par_log_config);
    CHECK_OBJECT(par_log_level);
    Py_DECREF(par_log_level);
    CHECK_OBJECT(par_access_log);
    Py_DECREF(par_access_log);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_server_header);
    Py_DECREF(par_server_header);
    CHECK_OBJECT(par_date_header);
    Py_DECREF(par_date_header);
    CHECK_OBJECT(par_forwarded_allow_ips);
    Py_DECREF(par_forwarded_allow_ips);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_limit_concurrency);
    Py_DECREF(par_limit_concurrency);
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    CHECK_OBJECT(par_limit_max_requests);
    Py_DECREF(par_limit_max_requests);
    CHECK_OBJECT(par_timeout_keep_alive);
    Py_DECREF(par_timeout_keep_alive);
    CHECK_OBJECT(par_ssl_keyfile);
    Py_DECREF(par_ssl_keyfile);
    CHECK_OBJECT(par_ssl_certfile);
    Py_DECREF(par_ssl_certfile);
    CHECK_OBJECT(par_ssl_keyfile_password);
    Py_DECREF(par_ssl_keyfile_password);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_ssl_cert_reqs);
    Py_DECREF(par_ssl_cert_reqs);
    CHECK_OBJECT(par_ssl_ca_certs);
    Py_DECREF(par_ssl_ca_certs);
    CHECK_OBJECT(par_ssl_ciphers);
    Py_DECREF(par_ssl_ciphers);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_use_colors);
    Py_DECREF(par_use_colors);
    CHECK_OBJECT(par_app_dir);
    Py_DECREF(par_app_dir);
    CHECK_OBJECT(par_h11_max_incomplete_event_size);
    Py_DECREF(par_h11_max_incomplete_event_size);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_fd);
    Py_DECREF(par_fd);
    CHECK_OBJECT(par_loop);
    Py_DECREF(par_loop);
    CHECK_OBJECT(par_http);
    Py_DECREF(par_http);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_ws_max_size);
    Py_DECREF(par_ws_max_size);
    CHECK_OBJECT(par_ws_ping_interval);
    Py_DECREF(par_ws_ping_interval);
    CHECK_OBJECT(par_ws_ping_timeout);
    Py_DECREF(par_ws_ping_timeout);
    CHECK_OBJECT(par_ws_per_message_deflate);
    Py_DECREF(par_ws_per_message_deflate);
    CHECK_OBJECT(par_lifespan);
    Py_DECREF(par_lifespan);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    CHECK_OBJECT(par_reload);
    Py_DECREF(par_reload);
    CHECK_OBJECT(par_reload_dirs);
    Py_DECREF(par_reload_dirs);
    CHECK_OBJECT(par_reload_includes);
    Py_DECREF(par_reload_includes);
    CHECK_OBJECT(par_reload_excludes);
    Py_DECREF(par_reload_excludes);
    CHECK_OBJECT(par_reload_delay);
    Py_DECREF(par_reload_delay);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_env_file);
    Py_DECREF(par_env_file);
    CHECK_OBJECT(par_log_config);
    Py_DECREF(par_log_config);
    CHECK_OBJECT(par_log_level);
    Py_DECREF(par_log_level);
    CHECK_OBJECT(par_access_log);
    Py_DECREF(par_access_log);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_server_header);
    Py_DECREF(par_server_header);
    CHECK_OBJECT(par_date_header);
    Py_DECREF(par_date_header);
    CHECK_OBJECT(par_forwarded_allow_ips);
    Py_DECREF(par_forwarded_allow_ips);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_limit_concurrency);
    Py_DECREF(par_limit_concurrency);
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    CHECK_OBJECT(par_limit_max_requests);
    Py_DECREF(par_limit_max_requests);
    CHECK_OBJECT(par_timeout_keep_alive);
    Py_DECREF(par_timeout_keep_alive);
    CHECK_OBJECT(par_ssl_keyfile);
    Py_DECREF(par_ssl_keyfile);
    CHECK_OBJECT(par_ssl_certfile);
    Py_DECREF(par_ssl_certfile);
    CHECK_OBJECT(par_ssl_keyfile_password);
    Py_DECREF(par_ssl_keyfile_password);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_ssl_cert_reqs);
    Py_DECREF(par_ssl_cert_reqs);
    CHECK_OBJECT(par_ssl_ca_certs);
    Py_DECREF(par_ssl_ca_certs);
    CHECK_OBJECT(par_ssl_ciphers);
    Py_DECREF(par_ssl_ciphers);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_use_colors);
    Py_DECREF(par_use_colors);
    CHECK_OBJECT(par_app_dir);
    Py_DECREF(par_app_dir);
    CHECK_OBJECT(par_h11_max_incomplete_event_size);
    Py_DECREF(par_h11_max_incomplete_event_size);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_uvicorn$main$$$function__3_run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_app = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_uds = python_pars[3];
    PyObject *par_fd = python_pars[4];
    PyObject *par_loop = python_pars[5];
    PyObject *par_http = python_pars[6];
    PyObject *par_ws = python_pars[7];
    PyObject *par_ws_max_size = python_pars[8];
    PyObject *par_ws_ping_interval = python_pars[9];
    PyObject *par_ws_ping_timeout = python_pars[10];
    PyObject *par_ws_per_message_deflate = python_pars[11];
    PyObject *par_lifespan = python_pars[12];
    PyObject *par_interface = python_pars[13];
    PyObject *par_reload = python_pars[14];
    PyObject *par_reload_dirs = python_pars[15];
    PyObject *par_reload_includes = python_pars[16];
    PyObject *par_reload_excludes = python_pars[17];
    PyObject *par_reload_delay = python_pars[18];
    PyObject *par_workers = python_pars[19];
    PyObject *par_env_file = python_pars[20];
    PyObject *par_log_config = python_pars[21];
    PyObject *par_log_level = python_pars[22];
    PyObject *par_access_log = python_pars[23];
    PyObject *par_proxy_headers = python_pars[24];
    PyObject *par_server_header = python_pars[25];
    PyObject *par_date_header = python_pars[26];
    PyObject *par_forwarded_allow_ips = python_pars[27];
    PyObject *par_root_path = python_pars[28];
    PyObject *par_limit_concurrency = python_pars[29];
    PyObject *par_backlog = python_pars[30];
    PyObject *par_limit_max_requests = python_pars[31];
    PyObject *par_timeout_keep_alive = python_pars[32];
    PyObject *par_ssl_keyfile = python_pars[33];
    PyObject *par_ssl_certfile = python_pars[34];
    PyObject *par_ssl_keyfile_password = python_pars[35];
    PyObject *par_ssl_version = python_pars[36];
    PyObject *par_ssl_cert_reqs = python_pars[37];
    PyObject *par_ssl_ca_certs = python_pars[38];
    PyObject *par_ssl_ciphers = python_pars[39];
    PyObject *par_headers = python_pars[40];
    PyObject *par_use_colors = python_pars[41];
    PyObject *par_app_dir = python_pars[42];
    PyObject *par_factory = python_pars[43];
    PyObject *par_h11_max_incomplete_event_size = python_pars[44];
    PyObject *var_config = NULL;
    PyObject *var_server = NULL;
    PyObject *var_logger = NULL;
    PyObject *var_sock = NULL;
    struct Nuitka_FrameObject *frame_fab1bd0849517409354a0a240d92ef8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fab1bd0849517409354a0a240d92ef8e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fab1bd0849517409354a0a240d92ef8e)) {
        Py_XDECREF(cache_frame_fab1bd0849517409354a0a240d92ef8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fab1bd0849517409354a0a240d92ef8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fab1bd0849517409354a0a240d92ef8e = MAKE_FUNCTION_FRAME(tstate, codeobj_fab1bd0849517409354a0a240d92ef8e, module_uvicorn$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fab1bd0849517409354a0a240d92ef8e->m_type_description == NULL);
    frame_fab1bd0849517409354a0a240d92ef8e = cache_frame_fab1bd0849517409354a0a240d92ef8e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fab1bd0849517409354a0a240d92ef8e);
    assert(Py_REFCNT(frame_fab1bd0849517409354a0a240d92ef8e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_app_dir);
        tmp_cmp_expr_left_1 = par_app_dir;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[18]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[20];
        CHECK_OBJECT(par_app_dir);
        tmp_args_element_value_2 = par_app_dir;
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        PyObject *tmp_kw_call_dict_value_14_1;
        PyObject *tmp_kw_call_dict_value_15_1;
        PyObject *tmp_kw_call_dict_value_16_1;
        PyObject *tmp_kw_call_dict_value_17_1;
        PyObject *tmp_kw_call_dict_value_18_1;
        PyObject *tmp_kw_call_dict_value_19_1;
        PyObject *tmp_kw_call_dict_value_20_1;
        PyObject *tmp_kw_call_dict_value_21_1;
        PyObject *tmp_kw_call_dict_value_22_1;
        PyObject *tmp_kw_call_dict_value_23_1;
        PyObject *tmp_kw_call_dict_value_24_1;
        PyObject *tmp_kw_call_dict_value_25_1;
        PyObject *tmp_kw_call_dict_value_26_1;
        PyObject *tmp_kw_call_dict_value_27_1;
        PyObject *tmp_kw_call_dict_value_28_1;
        PyObject *tmp_kw_call_dict_value_29_1;
        PyObject *tmp_kw_call_dict_value_30_1;
        PyObject *tmp_kw_call_dict_value_31_1;
        PyObject *tmp_kw_call_dict_value_32_1;
        PyObject *tmp_kw_call_dict_value_33_1;
        PyObject *tmp_kw_call_dict_value_34_1;
        PyObject *tmp_kw_call_dict_value_35_1;
        PyObject *tmp_kw_call_dict_value_36_1;
        PyObject *tmp_kw_call_dict_value_37_1;
        PyObject *tmp_kw_call_dict_value_38_1;
        PyObject *tmp_kw_call_dict_value_39_1;
        PyObject *tmp_kw_call_dict_value_40_1;
        PyObject *tmp_kw_call_dict_value_41_1;
        PyObject *tmp_kw_call_dict_value_42_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_app);
        tmp_kw_call_arg_value_0_1 = par_app;
        CHECK_OBJECT(par_host);
        tmp_kw_call_dict_value_0_1 = par_host;
        CHECK_OBJECT(par_port);
        tmp_kw_call_dict_value_1_1 = par_port;
        CHECK_OBJECT(par_uds);
        tmp_kw_call_dict_value_2_1 = par_uds;
        CHECK_OBJECT(par_fd);
        tmp_kw_call_dict_value_3_1 = par_fd;
        CHECK_OBJECT(par_loop);
        tmp_kw_call_dict_value_4_1 = par_loop;
        CHECK_OBJECT(par_http);
        tmp_kw_call_dict_value_5_1 = par_http;
        CHECK_OBJECT(par_ws);
        tmp_kw_call_dict_value_6_1 = par_ws;
        CHECK_OBJECT(par_ws_max_size);
        tmp_kw_call_dict_value_7_1 = par_ws_max_size;
        CHECK_OBJECT(par_ws_ping_interval);
        tmp_kw_call_dict_value_8_1 = par_ws_ping_interval;
        CHECK_OBJECT(par_ws_ping_timeout);
        tmp_kw_call_dict_value_9_1 = par_ws_ping_timeout;
        CHECK_OBJECT(par_ws_per_message_deflate);
        tmp_kw_call_dict_value_10_1 = par_ws_per_message_deflate;
        CHECK_OBJECT(par_lifespan);
        tmp_kw_call_dict_value_11_1 = par_lifespan;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_12_1 = par_interface;
        CHECK_OBJECT(par_reload);
        tmp_kw_call_dict_value_13_1 = par_reload;
        CHECK_OBJECT(par_reload_dirs);
        tmp_kw_call_dict_value_14_1 = par_reload_dirs;
        CHECK_OBJECT(par_reload_includes);
        tmp_kw_call_dict_value_15_1 = par_reload_includes;
        CHECK_OBJECT(par_reload_excludes);
        tmp_kw_call_dict_value_16_1 = par_reload_excludes;
        CHECK_OBJECT(par_reload_delay);
        tmp_kw_call_dict_value_17_1 = par_reload_delay;
        CHECK_OBJECT(par_workers);
        tmp_kw_call_dict_value_18_1 = par_workers;
        CHECK_OBJECT(par_env_file);
        tmp_kw_call_dict_value_19_1 = par_env_file;
        CHECK_OBJECT(par_log_config);
        tmp_kw_call_dict_value_20_1 = par_log_config;
        CHECK_OBJECT(par_log_level);
        tmp_kw_call_dict_value_21_1 = par_log_level;
        CHECK_OBJECT(par_access_log);
        tmp_kw_call_dict_value_22_1 = par_access_log;
        CHECK_OBJECT(par_proxy_headers);
        tmp_kw_call_dict_value_23_1 = par_proxy_headers;
        CHECK_OBJECT(par_server_header);
        tmp_kw_call_dict_value_24_1 = par_server_header;
        CHECK_OBJECT(par_date_header);
        tmp_kw_call_dict_value_25_1 = par_date_header;
        CHECK_OBJECT(par_forwarded_allow_ips);
        tmp_kw_call_dict_value_26_1 = par_forwarded_allow_ips;
        CHECK_OBJECT(par_root_path);
        tmp_kw_call_dict_value_27_1 = par_root_path;
        CHECK_OBJECT(par_limit_concurrency);
        tmp_kw_call_dict_value_28_1 = par_limit_concurrency;
        CHECK_OBJECT(par_backlog);
        tmp_kw_call_dict_value_29_1 = par_backlog;
        CHECK_OBJECT(par_limit_max_requests);
        tmp_kw_call_dict_value_30_1 = par_limit_max_requests;
        CHECK_OBJECT(par_timeout_keep_alive);
        tmp_kw_call_dict_value_31_1 = par_timeout_keep_alive;
        CHECK_OBJECT(par_ssl_keyfile);
        tmp_kw_call_dict_value_32_1 = par_ssl_keyfile;
        CHECK_OBJECT(par_ssl_certfile);
        tmp_kw_call_dict_value_33_1 = par_ssl_certfile;
        CHECK_OBJECT(par_ssl_keyfile_password);
        tmp_kw_call_dict_value_34_1 = par_ssl_keyfile_password;
        CHECK_OBJECT(par_ssl_version);
        tmp_kw_call_dict_value_35_1 = par_ssl_version;
        CHECK_OBJECT(par_ssl_cert_reqs);
        tmp_kw_call_dict_value_36_1 = par_ssl_cert_reqs;
        CHECK_OBJECT(par_ssl_ca_certs);
        tmp_kw_call_dict_value_37_1 = par_ssl_ca_certs;
        CHECK_OBJECT(par_ssl_ciphers);
        tmp_kw_call_dict_value_38_1 = par_ssl_ciphers;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_39_1 = par_headers;
        CHECK_OBJECT(par_use_colors);
        tmp_kw_call_dict_value_40_1 = par_use_colors;
        CHECK_OBJECT(par_factory);
        tmp_kw_call_dict_value_41_1 = par_factory;
        CHECK_OBJECT(par_h11_max_incomplete_event_size);
        tmp_kw_call_dict_value_42_1 = par_h11_max_incomplete_event_size;
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 505;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[43] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1, tmp_kw_call_dict_value_26_1, tmp_kw_call_dict_value_27_1, tmp_kw_call_dict_value_28_1, tmp_kw_call_dict_value_29_1, tmp_kw_call_dict_value_30_1, tmp_kw_call_dict_value_31_1, tmp_kw_call_dict_value_32_1, tmp_kw_call_dict_value_33_1, tmp_kw_call_dict_value_34_1, tmp_kw_call_dict_value_35_1, tmp_kw_call_dict_value_36_1, tmp_kw_call_dict_value_37_1, tmp_kw_call_dict_value_38_1, tmp_kw_call_dict_value_39_1, tmp_kw_call_dict_value_40_1, tmp_kw_call_dict_value_41_1, tmp_kw_call_dict_value_42_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[22]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_config == NULL);
        var_config = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_kw_call_value_0_1 = var_config;
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 551;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[24]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_server == NULL);
        var_server = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_config);
        tmp_expression_value_3 = var_config;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_config);
        tmp_expression_value_4 = var_config;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[26]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[27];
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_app);
        tmp_isinstance_inst_1 = par_app;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 554;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_logger == NULL);
        var_logger = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_logger);
        tmp_called_instance_2 = var_logger;
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 555;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 559;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[11],
            PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_config);
        tmp_expression_value_5 = var_config;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[34]);
        if (tmp_attribute_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 561;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_config);
        tmp_called_instance_4 = var_config;
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 562;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[35]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sock == NULL);
        var_sock = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_call_result_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_kw_call_arg_value_0_2 = var_config;
        CHECK_OBJECT(var_server);
        tmp_expression_value_6 = var_server;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[12]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sock);
        tmp_list_element_1 = var_sock;
        tmp_kw_call_dict_value_1_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_1_2, 0, tmp_list_element_1);
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 563;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_called_instance_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 563;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[12]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_config);
        tmp_expression_value_7 = var_config;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[26]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[27];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_config);
        tmp_called_instance_6 = var_config;
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 565;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[35]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sock == NULL);
        var_sock = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_call_result_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_kw_call_arg_value_0_3 = var_config;
        CHECK_OBJECT(var_server);
        tmp_expression_value_8 = var_server;
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[12]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sock);
        tmp_list_element_2 = var_sock;
        tmp_kw_call_dict_value_1_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_1_3, 0, tmp_list_element_2);
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 566;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_called_instance_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 566;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[12]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_server);
        tmp_called_instance_8 = var_server;
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 568;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[12]);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_4:;
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        PyObject *tmp_exists_arg_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_config);
        tmp_expression_value_9 = var_config;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[39]);
        if (tmp_attribute_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_config);
        tmp_expression_value_10 = var_config;
        tmp_exists_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[39]);
        if (tmp_exists_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_capi_result_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
        Py_DECREF(tmp_exists_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_11 == NULL));
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[41]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_12 = var_config;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[39]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 570;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_13;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_15;
        if (var_server == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_server;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[43]);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_config);
        tmp_expression_value_14 = var_config;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[34]);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(var_config);
        tmp_expression_value_15 = var_config;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[26]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[27];
        tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_6 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_6 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[11]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fab1bd0849517409354a0a240d92ef8e->m_frame.f_lineno = 573;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fab1bd0849517409354a0a240d92ef8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fab1bd0849517409354a0a240d92ef8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fab1bd0849517409354a0a240d92ef8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fab1bd0849517409354a0a240d92ef8e,
        type_description_1,
        par_app,
        par_host,
        par_port,
        par_uds,
        par_fd,
        par_loop,
        par_http,
        par_ws,
        par_ws_max_size,
        par_ws_ping_interval,
        par_ws_ping_timeout,
        par_ws_per_message_deflate,
        par_lifespan,
        par_interface,
        par_reload,
        par_reload_dirs,
        par_reload_includes,
        par_reload_excludes,
        par_reload_delay,
        par_workers,
        par_env_file,
        par_log_config,
        par_log_level,
        par_access_log,
        par_proxy_headers,
        par_server_header,
        par_date_header,
        par_forwarded_allow_ips,
        par_root_path,
        par_limit_concurrency,
        par_backlog,
        par_limit_max_requests,
        par_timeout_keep_alive,
        par_ssl_keyfile,
        par_ssl_certfile,
        par_ssl_keyfile_password,
        par_ssl_version,
        par_ssl_cert_reqs,
        par_ssl_ca_certs,
        par_ssl_ciphers,
        par_headers,
        par_use_colors,
        par_app_dir,
        par_factory,
        par_h11_max_incomplete_event_size,
        var_config,
        var_server,
        var_logger,
        var_sock
    );


    // Release cached frame if used for exception.
    if (frame_fab1bd0849517409354a0a240d92ef8e == cache_frame_fab1bd0849517409354a0a240d92ef8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fab1bd0849517409354a0a240d92ef8e);
        cache_frame_fab1bd0849517409354a0a240d92ef8e = NULL;
    }

    assertFrameObject(frame_fab1bd0849517409354a0a240d92ef8e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_config);
    Py_DECREF(var_config);
    var_config = NULL;
    Py_XDECREF(var_server);
    var_server = NULL;
    Py_XDECREF(var_logger);
    var_logger = NULL;
    Py_XDECREF(var_sock);
    var_sock = NULL;
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

    Py_XDECREF(var_config);
    var_config = NULL;
    Py_XDECREF(var_server);
    var_server = NULL;
    Py_XDECREF(var_logger);
    var_logger = NULL;
    Py_XDECREF(var_sock);
    var_sock = NULL;
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
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_fd);
    Py_DECREF(par_fd);
    CHECK_OBJECT(par_loop);
    Py_DECREF(par_loop);
    CHECK_OBJECT(par_http);
    Py_DECREF(par_http);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_ws_max_size);
    Py_DECREF(par_ws_max_size);
    CHECK_OBJECT(par_ws_ping_interval);
    Py_DECREF(par_ws_ping_interval);
    CHECK_OBJECT(par_ws_ping_timeout);
    Py_DECREF(par_ws_ping_timeout);
    CHECK_OBJECT(par_ws_per_message_deflate);
    Py_DECREF(par_ws_per_message_deflate);
    CHECK_OBJECT(par_lifespan);
    Py_DECREF(par_lifespan);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    CHECK_OBJECT(par_reload);
    Py_DECREF(par_reload);
    CHECK_OBJECT(par_reload_dirs);
    Py_DECREF(par_reload_dirs);
    CHECK_OBJECT(par_reload_includes);
    Py_DECREF(par_reload_includes);
    CHECK_OBJECT(par_reload_excludes);
    Py_DECREF(par_reload_excludes);
    CHECK_OBJECT(par_reload_delay);
    Py_DECREF(par_reload_delay);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_env_file);
    Py_DECREF(par_env_file);
    CHECK_OBJECT(par_log_config);
    Py_DECREF(par_log_config);
    CHECK_OBJECT(par_log_level);
    Py_DECREF(par_log_level);
    CHECK_OBJECT(par_access_log);
    Py_DECREF(par_access_log);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_server_header);
    Py_DECREF(par_server_header);
    CHECK_OBJECT(par_date_header);
    Py_DECREF(par_date_header);
    CHECK_OBJECT(par_forwarded_allow_ips);
    Py_DECREF(par_forwarded_allow_ips);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_limit_concurrency);
    Py_DECREF(par_limit_concurrency);
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    CHECK_OBJECT(par_limit_max_requests);
    Py_DECREF(par_limit_max_requests);
    CHECK_OBJECT(par_timeout_keep_alive);
    Py_DECREF(par_timeout_keep_alive);
    CHECK_OBJECT(par_ssl_keyfile);
    Py_DECREF(par_ssl_keyfile);
    CHECK_OBJECT(par_ssl_certfile);
    Py_DECREF(par_ssl_certfile);
    CHECK_OBJECT(par_ssl_keyfile_password);
    Py_DECREF(par_ssl_keyfile_password);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_ssl_cert_reqs);
    Py_DECREF(par_ssl_cert_reqs);
    CHECK_OBJECT(par_ssl_ca_certs);
    Py_DECREF(par_ssl_ca_certs);
    CHECK_OBJECT(par_ssl_ciphers);
    Py_DECREF(par_ssl_ciphers);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_use_colors);
    Py_DECREF(par_use_colors);
    CHECK_OBJECT(par_app_dir);
    Py_DECREF(par_app_dir);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    CHECK_OBJECT(par_h11_max_incomplete_event_size);
    Py_DECREF(par_h11_max_incomplete_event_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_fd);
    Py_DECREF(par_fd);
    CHECK_OBJECT(par_loop);
    Py_DECREF(par_loop);
    CHECK_OBJECT(par_http);
    Py_DECREF(par_http);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_ws_max_size);
    Py_DECREF(par_ws_max_size);
    CHECK_OBJECT(par_ws_ping_interval);
    Py_DECREF(par_ws_ping_interval);
    CHECK_OBJECT(par_ws_ping_timeout);
    Py_DECREF(par_ws_ping_timeout);
    CHECK_OBJECT(par_ws_per_message_deflate);
    Py_DECREF(par_ws_per_message_deflate);
    CHECK_OBJECT(par_lifespan);
    Py_DECREF(par_lifespan);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    CHECK_OBJECT(par_reload);
    Py_DECREF(par_reload);
    CHECK_OBJECT(par_reload_dirs);
    Py_DECREF(par_reload_dirs);
    CHECK_OBJECT(par_reload_includes);
    Py_DECREF(par_reload_includes);
    CHECK_OBJECT(par_reload_excludes);
    Py_DECREF(par_reload_excludes);
    CHECK_OBJECT(par_reload_delay);
    Py_DECREF(par_reload_delay);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_env_file);
    Py_DECREF(par_env_file);
    CHECK_OBJECT(par_log_config);
    Py_DECREF(par_log_config);
    CHECK_OBJECT(par_log_level);
    Py_DECREF(par_log_level);
    CHECK_OBJECT(par_access_log);
    Py_DECREF(par_access_log);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_server_header);
    Py_DECREF(par_server_header);
    CHECK_OBJECT(par_date_header);
    Py_DECREF(par_date_header);
    CHECK_OBJECT(par_forwarded_allow_ips);
    Py_DECREF(par_forwarded_allow_ips);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_limit_concurrency);
    Py_DECREF(par_limit_concurrency);
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    CHECK_OBJECT(par_limit_max_requests);
    Py_DECREF(par_limit_max_requests);
    CHECK_OBJECT(par_timeout_keep_alive);
    Py_DECREF(par_timeout_keep_alive);
    CHECK_OBJECT(par_ssl_keyfile);
    Py_DECREF(par_ssl_keyfile);
    CHECK_OBJECT(par_ssl_certfile);
    Py_DECREF(par_ssl_certfile);
    CHECK_OBJECT(par_ssl_keyfile_password);
    Py_DECREF(par_ssl_keyfile_password);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_ssl_cert_reqs);
    Py_DECREF(par_ssl_cert_reqs);
    CHECK_OBJECT(par_ssl_ca_certs);
    Py_DECREF(par_ssl_ca_certs);
    CHECK_OBJECT(par_ssl_ciphers);
    Py_DECREF(par_ssl_ciphers);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_use_colors);
    Py_DECREF(par_use_colors);
    CHECK_OBJECT(par_app_dir);
    Py_DECREF(par_app_dir);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    CHECK_OBJECT(par_h11_max_incomplete_event_size);
    Py_DECREF(par_h11_max_incomplete_event_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__1_print_version(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_uvicorn$main$$$function__1_print_version,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_64b3aac55c9c36e38e37e9f4a90c1996,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_uvicorn$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__2_main(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_uvicorn$main$$$function__2_main,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_01258ae461c8447ed13566b58a9d7cab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_uvicorn$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__3_run(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_uvicorn$main$$$function__3_run,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fab1bd0849517409354a0a240d92ef8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_uvicorn$main,
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

function_impl_code functable_uvicorn$main[] = {
    impl_uvicorn$main$$$function__1_print_version,
    impl_uvicorn$main$$$function__2_main,
    impl_uvicorn$main$$$function__3_run,
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

    function_impl_code *current = functable_uvicorn$main;
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

    if (offset > sizeof(functable_uvicorn$main) || offset < 0) {
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
        functable_uvicorn$main[offset],
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
        module_uvicorn$main,
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
PyObject *modulecode_uvicorn$main(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("uvicorn.main");

    // Store the module for future use.
    module_uvicorn$main = module;

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
        PRINT_STRING("uvicorn.main: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("uvicorn.main: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inituvicorn$main\n");

    moduledict_uvicorn$main = MODULE_DICT(module_uvicorn$main);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_uvicorn$main,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_uvicorn$main,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[218]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_uvicorn$main,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_uvicorn$main,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_uvicorn$main,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_uvicorn$main);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_uvicorn$main);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_key = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_c5b72ebb35a2087d5a3f7752f30acc31;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    frame_c5b72ebb35a2087d5a3f7752f30acc31 = MAKE_MODULE_FRAME(codeobj_c5b72ebb35a2087d5a3f7752f30acc31, module_uvicorn$main);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c5b72ebb35a2087d5a3f7752f30acc31);
    assert(Py_REFCNT(frame_c5b72ebb35a2087d5a3f7752f30acc31) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[49], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[51];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[28];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[6];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[52];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[1];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[4];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 11;
        tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[54];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[55];
        tmp_level_value_7 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 12;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[56],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[56]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[57],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[57]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[58],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[58]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[59],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[59]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[13],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[13]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[60],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[60]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[61],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[61]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[62],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[62]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[21],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[21]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[63],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[63]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[64],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[64]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[65],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[65]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[66],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[66]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[67],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[67]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_27);
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
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[68];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[69];
        tmp_level_value_8 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 28;
        tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[23],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[23]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[70],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[70]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_30);
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
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[71];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[72];
        tmp_level_value_9 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 29;
        tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[36],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[36]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[38],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[38]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_33);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[73]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[74]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 34;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 34;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[73]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[74]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 35;
        tmp_list_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_list_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST(tstate, tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 35;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_arg_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[73]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[74]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 36;
        tmp_list_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_list_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST(tstate, tmp_list_arg_3);
        Py_DECREF(tmp_list_arg_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 36;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_arg_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[73]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[74]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 37;
        tmp_list_arg_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_list_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = MAKE_LIST(tstate, tmp_list_arg_4);
        Py_DECREF(tmp_list_arg_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 37;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[73]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_10;
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_4;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[74]);
            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_4;
            }
            frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 38;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
            Py_DECREF(tmp_called_value_10);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_4;
            }
            tmp_assign_source_39 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_39;
        }
        {
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_40;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_41 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_41 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    exception_lineno = 38;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_41;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_42 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_key;
                outline_0_var_key = tmp_assign_source_42;
                Py_INCREF(outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(outline_0_var_key);
            tmp_cmp_expr_left_1 = outline_0_var_key;
            tmp_cmp_expr_right_1 = mod_consts[79];
            tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_key);
            tmp_append_value_1 = outline_0_var_key;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_5;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 38;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 38;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[73]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 39;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 43;
        tmp_assign_source_45 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_12;
        tmp_dict_key_1 = mod_consts[10];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[84]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[86]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[87];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[88];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_46 = MAKE_FUNCTION_uvicorn$main$$$function__1_print_version(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_args_kwsplit_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_36;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_42;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_48;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_57;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_68;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_74;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_value_80;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_value_82;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_84;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_86;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_value_88;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_90;
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_92;
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_kw_call_value_2_11;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_94;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_96;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_value_98;
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_called_value_100;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_kw_call_value_2_12;
        PyObject *tmp_kw_call_value_3_11;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_called_value_102;
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_104;
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_called_value_106;
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[90]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[91], "d");
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 61;
        tmp_called_value_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[92]);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 62;
        tmp_called_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[93],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[95]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 63;
        tmp_called_value_15 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[96], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[95]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 70;
        tmp_called_value_17 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[95]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 77;
        tmp_called_value_19 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[99], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[95]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 78;
        tmp_called_value_21 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[95]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 81;
        tmp_called_value_23 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[102], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[95]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = Py_True;
        tmp_kw_call_value_1_1 = mod_consts[104];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[105]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 88;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[107]);
        Py_DECREF(tmp_called_value_27);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 82;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
            tmp_called_value_25 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tstate, tmp_called_value_26, mod_consts[108], kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[95]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 90;
        tmp_called_value_28 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[110], 0), mod_consts[111]);
        Py_DECREF(tmp_called_value_29);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[95]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 98;
        tmp_called_value_30 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[112], 0), mod_consts[111]);
        Py_DECREF(tmp_called_value_31);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[95]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 107;
        tmp_called_value_32 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[113], 0), mod_consts[114]);
        Py_DECREF(tmp_called_value_33);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[95]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 115;
        tmp_called_value_34 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[115], 0), mod_consts[116]);
        Py_DECREF(tmp_called_value_35);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[95]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = mod_consts[117];
        tmp_kw_call_value_2_2 = mod_consts[118];
        tmp_kw_call_value_3_1 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 122;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1};
            tmp_called_value_36 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_37, mod_consts[119], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_37);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[95]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = mod_consts[117];
        tmp_kw_call_value_2_3 = mod_consts[120];
        tmp_kw_call_value_3_2 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 129;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_2};
            tmp_called_value_38 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_39, mod_consts[121], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_39);
        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[95]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = mod_consts[117];
        tmp_kw_call_value_2_4 = mod_consts[122];
        tmp_kw_call_value_3_3 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 136;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_3};
            tmp_called_value_40 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_41, mod_consts[123], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_41);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[95]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 143;
        tmp_called_value_42 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[124], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_43);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[95]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 150;
        tmp_called_value_44 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[125], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_45);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[95]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 157;
        tmp_called_value_46 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_47, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_47);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[95]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 164;
        tmp_called_value_48 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[127], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_49);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[95]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
            tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_5 = mod_consts[117];
        tmp_kw_call_value_2_5 = mod_consts[128];
        tmp_kw_call_value_3_4 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 171;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_4};
            tmp_called_value_50 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_51, mod_consts[129], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_51);
        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[95]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
            tmp_kw_call_value_0_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_6 = mod_consts[117];
        tmp_kw_call_value_2_6 = mod_consts[130];
        tmp_kw_call_value_3_5 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 178;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_5};
            tmp_called_value_52 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_53, mod_consts[131], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_53);
        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[95]);
        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[105]);
        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 187;
        tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_56, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[107]);
        Py_DECREF(tmp_called_value_56);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_7 = Py_None;
        tmp_kw_call_value_2_7 = mod_consts[132];
        tmp_kw_call_value_3_6 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 185;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_6};
            tmp_called_value_54 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_55, mod_consts[133], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[95]);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[105]);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 194;
        tmp_kw_call_value_0_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_59, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[107]);
        Py_DECREF(tmp_called_value_59);
        if (tmp_kw_call_value_0_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_8 = Py_None;
        tmp_kw_call_value_2_8 = mod_consts[134];
        tmp_kw_call_value_3_7 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 192;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_7};
            tmp_called_value_57 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_58, mod_consts[135], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_kw_call_value_0_8);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[95]);
        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_kw_call_value_0_9 == NULL)) {
            tmp_kw_call_value_0_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        if (tmp_kw_call_value_0_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_9 = Py_None;
        tmp_kw_call_value_2_9 = mod_consts[136];
        tmp_kw_call_value_3_8 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 199;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_8};
            tmp_called_value_60 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_61, mod_consts[137], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_61);
        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[95]);
        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 206;
        tmp_called_value_62 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_63, &PyTuple_GET_ITEM(mod_consts[138], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_63);
        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[95]);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 212;
        tmp_called_value_64 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_65, &PyTuple_GET_ITEM(mod_consts[139], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_65);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[95]);
        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 218;
        tmp_called_value_66 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_67, &PyTuple_GET_ITEM(mod_consts[140], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_67);
        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[95]);
        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 225;
        tmp_called_value_68 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_69, &PyTuple_GET_ITEM(mod_consts[141], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_69);
        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[95]);
        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 231;
        tmp_called_value_70 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_71, &PyTuple_GET_ITEM(mod_consts[142], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_71);
        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[95]);
        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 237;
        tmp_called_value_72 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_73, &PyTuple_GET_ITEM(mod_consts[143], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_73);
        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[95]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 244;
        tmp_called_value_74 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_75, &PyTuple_GET_ITEM(mod_consts[144], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_75);
        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[95]);
        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 250;
        tmp_called_value_76 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_77, &PyTuple_GET_ITEM(mod_consts[145], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_77);
        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[95]);
        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 257;
        tmp_called_value_78 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_79, &PyTuple_GET_ITEM(mod_consts[146], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_79);
        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[95]);
        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 263;
        tmp_called_value_80 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_81, &PyTuple_GET_ITEM(mod_consts[147], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_81);
        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[95]);
        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 269;
        tmp_called_value_82 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_83, &PyTuple_GET_ITEM(mod_consts[148], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_83);
        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[95]);
        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 276;
        tmp_called_value_84 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_85, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_85);
        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[95]);
        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 279;
        tmp_called_value_86 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_87, &PyTuple_GET_ITEM(mod_consts[150], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_87);
        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[95]);
        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 286;
        tmp_called_value_88 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_89, &PyTuple_GET_ITEM(mod_consts[151], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_89);
        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[95]);
        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = (PyObject *)&PyLong_Type;
        tmp_int_arg_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_int_arg_1 == NULL)) {
            tmp_int_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_10 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_kw_call_value_1_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_10 = mod_consts[152];
        tmp_kw_call_value_3_9 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 293;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_9};
            tmp_called_value_90 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_91, mod_consts[153], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_kw_call_value_1_10);
        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[95]);
        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = (PyObject *)&PyLong_Type;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_int_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[154]);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_11 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_kw_call_value_1_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_11 = mod_consts[155];
        tmp_kw_call_value_3_10 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 300;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_10};
            tmp_called_value_92 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_93, mod_consts[156], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_kw_call_value_1_11);
        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[95]);
        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 307;
        tmp_called_value_94 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_95, &PyTuple_GET_ITEM(mod_consts[157], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_95);
        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[95]);
        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 314;
        tmp_called_value_96 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_97, &PyTuple_GET_ITEM(mod_consts[158], 0), mod_consts[97]);
        Py_DECREF(tmp_called_value_97);
        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[95]);
        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 321;
        tmp_called_value_98 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_99, &PyTuple_GET_ITEM(mod_consts[159], 0), mod_consts[111]);
        Py_DECREF(tmp_called_value_99);
        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[95]);
        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = Py_True;
        tmp_kw_call_value_1_12 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_kw_call_value_1_12 == NULL)) {
            tmp_kw_call_value_1_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_kw_call_value_1_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_12 = Py_False;
        tmp_kw_call_value_3_11 = Py_True;
        tmp_kw_call_value_4_1 = mod_consts[160];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 327;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_11, tmp_kw_call_value_4_1};
            tmp_called_value_100 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_101, mod_consts[161], kw_values, mod_consts[162]);
        }

        Py_DECREF(tmp_called_value_101);
        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[95]);
        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 335;
        tmp_called_value_102 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_103, &PyTuple_GET_ITEM(mod_consts[163], 0), mod_consts[164]);
        Py_DECREF(tmp_called_value_103);
        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[95]);
        if (tmp_called_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 342;
        tmp_called_value_104 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_105, &PyTuple_GET_ITEM(mod_consts[165], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_105);
        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[95]);
        if (tmp_called_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 349;
        tmp_called_value_106 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_107, &PyTuple_GET_ITEM(mod_consts[166], 0), mod_consts[167]);
        Py_DECREF(tmp_called_value_107);
        if (tmp_called_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[168];
        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_2 = _PyDict_NewPresized( 46 );
        {
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[169];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[170];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[39];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[171];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[172];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[173];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[174];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[175];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[176];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[177];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[178];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[179];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[180];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[25];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[181];
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_65 == NULL));
            tmp_expression_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[182]);
            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[183];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_67 == NULL));
            tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[182]);
            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[184];
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_69 == NULL));
            tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[182]);
            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[185];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[26];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[186];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[187];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[188];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[189];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[190];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[191];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[192];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[193];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[194];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[195];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[196];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[197];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[198];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[199];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[200];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[201];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[202];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[203];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[204];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[205];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[206];
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_71 == NULL));
            tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[182]);
            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[207];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[208];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[209];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_73 == NULL));
            tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[210]);
            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_5 = (PyObject *)&PyLong_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[211];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[88];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_args_element_value_53 = MAKE_FUNCTION_uvicorn$main$$$function__2_main(tmp_annotations_2);

        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 349;
        tmp_args_element_value_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_106, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_args_element_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 342;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_104, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 335;
        tmp_args_element_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_102, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 327;
        tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_args_element_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 321;
        tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 314;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 307;
        tmp_args_element_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_args_element_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 300;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 293;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 286;
        tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 279;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 276;
        tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 269;
        tmp_args_element_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 263;
        tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 257;
        tmp_args_element_value_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 250;
        tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 244;
        tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 237;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 231;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 225;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 218;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 212;
        tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 206;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 199;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 192;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 185;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 178;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 171;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 164;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 157;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 150;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 143;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 136;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 129;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 122;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 115;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 107;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 98;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 90;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 82;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 81;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 78;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 77;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 70;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 63;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 62;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 61;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_1;
        tmp_dict_key_3 = mod_consts[169];
        tmp_dict_value_3 = mod_consts[213];
        tmp_kw_defaults_1 = _PyDict_NewPresized( 44 );
        {
            PyObject *tmp_expression_value_74;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[170];
            tmp_dict_value_3 = mod_consts[214];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[39];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[171];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[172];
            tmp_dict_value_3 = mod_consts[117];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[173];
            tmp_dict_value_3 = mod_consts[117];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[174];
            tmp_dict_value_3 = mod_consts[117];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[175];
            tmp_dict_value_3 = mod_consts[215];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[176];
            tmp_dict_value_3 = mod_consts[216];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[177];
            tmp_dict_value_3 = mod_consts[216];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[178];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[179];
            tmp_dict_value_3 = mod_consts[117];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[180];
            tmp_dict_value_3 = mod_consts[117];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[25];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[181];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[183];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[184];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[185];
            tmp_dict_value_3 = mod_consts[217];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[26];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[186];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[187];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 477;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[188];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[189];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[190];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[191];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[192];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[193];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[194];
            tmp_dict_value_3 = mod_consts[218];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[195];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[196];
            tmp_dict_value_3 = mod_consts[219];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[197];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[198];
            tmp_dict_value_3 = mod_consts[220];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[199];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[200];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[201];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[202];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 492;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[203];
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[154]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[204];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[205];
            tmp_dict_value_3 = mod_consts[221];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[206];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[207];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[208];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[211];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[209];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_kw_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        tmp_dict_key_4 = mod_consts[168];
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        assert(!(tmp_expression_value_76 == NULL));
        tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[222]);
        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[223];
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_77;
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_1);
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_77 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[224]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_expression_value_75);
        Py_DECREF(tmp_subscript_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_75);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 46 );
        {
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_expression_value_123;
            PyObject *tmp_expression_value_124;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_136;
            PyObject *tmp_expression_value_137;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_expression_value_138;
            PyObject *tmp_expression_value_139;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_expression_value_140;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_expression_value_143;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_expression_value_144;
            PyObject *tmp_expression_value_145;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_expression_value_146;
            PyObject *tmp_expression_value_147;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_149;
            PyObject *tmp_expression_value_150;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_expression_value_151;
            PyObject *tmp_expression_value_152;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_expression_value_153;
            PyObject *tmp_expression_value_154;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_expression_value_155;
            PyObject *tmp_expression_value_156;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_expression_value_157;
            PyObject *tmp_expression_value_158;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_expression_value_159;
            PyObject *tmp_expression_value_160;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_expression_value_161;
            PyObject *tmp_expression_value_162;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_expression_value_163;
            PyObject *tmp_expression_value_164;
            PyObject *tmp_subscript_value_47;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[169];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[170];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[39];
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_79 == NULL));
            tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[210]);
            if (tmp_expression_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[171];
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_81 == NULL));
            tmp_expression_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[210]);
            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[172];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[173];
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_83 == NULL));
            tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[222]);
            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto dict_build_exception_4;
            }
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_85 == NULL));
            tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[225]);
            if (tmp_expression_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_82);

                exception_lineno = 460;

                goto dict_build_exception_4;
            }
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_82);
                Py_DECREF(tmp_expression_value_84);

                exception_lineno = 460;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[226]);
            if (tmp_subscript_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_82);
                Py_DECREF(tmp_expression_value_84);

                exception_lineno = 460;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_84);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_82);

                exception_lineno = 460;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_2);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_9);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[174];
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_88 == NULL));
            tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[222]);
            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_90 == NULL));
            tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[225]);
            if (tmp_expression_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_87);

                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_87);
                Py_DECREF(tmp_expression_value_89);

                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[226]);
            if (tmp_subscript_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_87);
                Py_DECREF(tmp_expression_value_89);

                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_89);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_87);

                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_3);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_expression_value_87);
            Py_DECREF(tmp_subscript_value_11);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_87);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[175];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[176];
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_93 == NULL));
            tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[210]);
            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 463;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_13 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 463;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[177];
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_95 == NULL));
            tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[210]);
            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_14 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_94);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[178];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[179];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[180];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[25];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[181];
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_97 == NULL));
            tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[210]);
            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_4;
            }
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_99 == NULL));
            tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[222]);
            if (tmp_expression_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_96);

                exception_lineno = 469;

                goto dict_build_exception_4;
            }
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_101 == NULL));
            tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[182]);
            if (tmp_expression_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_96);
                Py_DECREF(tmp_expression_value_98);

                exception_lineno = 469;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_100, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_96);
                Py_DECREF(tmp_expression_value_98);

                exception_lineno = 469;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_4);
            tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_98, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_98);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_subscript_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_96);

                exception_lineno = 469;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_96);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[183];
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_103 == NULL));
            tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[210]);
            if (tmp_expression_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_105 == NULL));
            tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[222]);
            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_102);

                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_107 == NULL));
            tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[182]);
            if (tmp_expression_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_102);
                Py_DECREF(tmp_expression_value_104);

                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_106, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_106);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_102);
                Py_DECREF(tmp_expression_value_104);

                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_5);
            tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_104, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_104);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_subscript_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_102);

                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_102, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_102);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[184];
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_109 == NULL));
            tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[210]);
            if (tmp_expression_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_111 == NULL));
            tmp_expression_value_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[222]);
            if (tmp_expression_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_108);

                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_113 == NULL));
            tmp_expression_value_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[182]);
            if (tmp_expression_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_108);
                Py_DECREF(tmp_expression_value_110);

                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_112, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_112);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_108);
                Py_DECREF(tmp_expression_value_110);

                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_22, 1, tmp_tuple_element_6);
            tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_110, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_110);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_subscript_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_108);

                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_108, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_108);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[185];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[26];
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_115 == NULL));
            tmp_expression_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[210]);
            if (tmp_expression_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_24 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_114, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[186];
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_117 == NULL));
            tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[210]);
            if (tmp_expression_value_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto dict_build_exception_4;
            }
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_119 == NULL));
            tmp_expression_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[222]);
            if (tmp_expression_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_116);

                exception_lineno = 474;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_120;
                PyTuple_SET_ITEM0(tmp_subscript_value_26, 0, tmp_tuple_element_7);
                tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[40]);

                if (unlikely(tmp_expression_value_120 == NULL)) {
                    tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
                }

                assert(!(tmp_expression_value_120 == NULL));
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[227]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 474;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_expression_value_116);
            Py_DECREF(tmp_expression_value_118);
            Py_DECREF(tmp_subscript_value_26);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_subscript_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_118, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_118);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_subscript_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_116);

                exception_lineno = 474;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_116, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_116);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[187];
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_122 == NULL));
            tmp_expression_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[210]);
            if (tmp_expression_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;

                goto dict_build_exception_4;
            }
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_124 == NULL));
            tmp_expression_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[222]);
            if (tmp_expression_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_121);

                exception_lineno = 476;

                goto dict_build_exception_4;
            }
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_126 == NULL));
            tmp_expression_value_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[228]);
            if (tmp_expression_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_121);
                Py_DECREF(tmp_expression_value_123);

                exception_lineno = 476;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_127;
                PyTuple_SET_ITEM0(tmp_subscript_value_29, 0, tmp_tuple_element_9);
                tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

                if (unlikely(tmp_expression_value_127 == NULL)) {
                    tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                }

                assert(!(tmp_expression_value_127 == NULL));
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[229]);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 476;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_29, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_expression_value_121);
            Py_DECREF(tmp_expression_value_123);
            Py_DECREF(tmp_expression_value_125);
            Py_DECREF(tmp_subscript_value_29);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_125, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_125);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_121);
                Py_DECREF(tmp_expression_value_123);

                exception_lineno = 476;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_28, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_28, 1, tmp_tuple_element_8);
            tmp_subscript_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_123, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_123);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_subscript_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_121);

                exception_lineno = 476;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_121, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_121);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[188];
            tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_129 == NULL)) {
                tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_129 == NULL));
            tmp_expression_value_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[210]);
            if (tmp_expression_value_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_4;
            }
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_131 == NULL));
            tmp_expression_value_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[222]);
            if (tmp_expression_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_128);

                exception_lineno = 478;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_31 = mod_consts[230];
            tmp_subscript_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_130, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_130);
            if (tmp_subscript_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_128);

                exception_lineno = 478;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_128, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_128);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[189];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[190];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[191];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[192];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[193];
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_133 == NULL));
            tmp_expression_value_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[210]);
            if (tmp_expression_value_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto dict_build_exception_4;
            }
            tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_135 == NULL)) {
                tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_135 == NULL));
            tmp_expression_value_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[222]);
            if (tmp_expression_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_132);

                exception_lineno = 483;

                goto dict_build_exception_4;
            }
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_137 == NULL));
            tmp_expression_value_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[182]);
            if (tmp_expression_value_136 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_132);
                Py_DECREF(tmp_expression_value_134);

                exception_lineno = 483;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_34 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_136, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_136);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_132);
                Py_DECREF(tmp_expression_value_134);

                exception_lineno = 483;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_33, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 1, tmp_tuple_element_10);
            tmp_subscript_value_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_134, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_134);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_subscript_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_132);

                exception_lineno = 483;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_132, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_132);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[194];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[195];
            tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_139 == NULL)) {
                tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_139 == NULL));
            tmp_expression_value_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[210]);
            if (tmp_expression_value_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_35 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_138, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_138);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[196];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[197];
            tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_141 == NULL)) {
                tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_141 == NULL));
            tmp_expression_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[210]);
            if (tmp_expression_value_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_36 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_140, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_140);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[198];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[199];
            tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_143 == NULL)) {
                tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_143 == NULL));
            tmp_expression_value_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[210]);
            if (tmp_expression_value_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_37 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_142, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_142);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[200];
            tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_145 == NULL)) {
                tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_145 == NULL));
            tmp_expression_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[210]);
            if (tmp_expression_value_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;

                goto dict_build_exception_4;
            }
            tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_147 == NULL)) {
                tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_147 == NULL));
            tmp_expression_value_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[222]);
            if (tmp_expression_value_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_144);

                exception_lineno = 490;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_148;
                PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_11);
                tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[40]);

                if (unlikely(tmp_expression_value_148 == NULL)) {
                    tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
                }

                assert(!(tmp_expression_value_148 == NULL));
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[227]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 490;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_39, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_expression_value_144);
            Py_DECREF(tmp_expression_value_146);
            Py_DECREF(tmp_subscript_value_39);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_subscript_value_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_146, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_146);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_subscript_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_144);

                exception_lineno = 490;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_144, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_144);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[201];
            tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_150 == NULL)) {
                tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_150 == NULL));
            tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[210]);
            if (tmp_expression_value_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_40 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_149, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_149);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[202];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[203];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[204];
            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_152 == NULL)) {
                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_152 == NULL));
            tmp_expression_value_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[210]);
            if (tmp_expression_value_151 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_41 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_151, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_151);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[205];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[206];
            tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_154 == NULL)) {
                tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_154 == NULL));
            tmp_expression_value_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[210]);
            if (tmp_expression_value_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto dict_build_exception_4;
            }
            tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_156 == NULL)) {
                tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_156 == NULL));
            tmp_expression_value_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[182]);
            if (tmp_expression_value_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_153);

                exception_lineno = 496;

                goto dict_build_exception_4;
            }
            tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_158 == NULL)) {
                tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_158 == NULL));
            tmp_expression_value_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[231]);
            if (tmp_expression_value_157 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_153);
                Py_DECREF(tmp_expression_value_155);

                exception_lineno = 496;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_44 = mod_consts[232];
            tmp_subscript_value_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_157, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_157);
            if (tmp_subscript_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_153);
                Py_DECREF(tmp_expression_value_155);

                exception_lineno = 496;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_155, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_155);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_subscript_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_153);

                exception_lineno = 496;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_153, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_153);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[207];
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_160 == NULL));
            tmp_expression_value_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[210]);
            if (tmp_expression_value_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_45 = (PyObject *)&PyBool_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_159, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_159);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[208];
            tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_162 == NULL)) {
                tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_162 == NULL));
            tmp_expression_value_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[210]);
            if (tmp_expression_value_161 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_46 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_161, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_161);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[211];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[209];
            tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_164 == NULL)) {
                tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            assert(!(tmp_expression_value_164 == NULL));
            tmp_expression_value_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[210]);
            if (tmp_expression_value_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_47 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_163, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_163);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[88];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_48 = MAKE_FUNCTION_uvicorn$main$$$function__3_run(tmp_kw_defaults_1, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_48);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5b72ebb35a2087d5a3f7752f30acc31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5b72ebb35a2087d5a3f7752f30acc31, exception_lineno);
    }



    assertFrameObject(frame_c5b72ebb35a2087d5a3f7752f30acc31);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("uvicorn.main", false);

    Py_INCREF(module_uvicorn$main);
    return module_uvicorn$main;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("uvicorn$main", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
