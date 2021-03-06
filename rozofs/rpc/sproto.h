/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SPROTO_H_RPCGEN
#define _SPROTO_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#include <rozofs/rozofs.h>

typedef uint32_t sp_uuid_t[ROZOFS_UUID_SIZE_RPC];

enum sp_status_t {
	SP_SUCCESS = 0,
	SP_FAILURE = 1,
};
typedef enum sp_status_t sp_status_t;

struct sp_status_ret_t {
	sp_status_t status;
	union {
		int error;
	} sp_status_ret_t_u;
};
typedef struct sp_status_ret_t sp_status_ret_t;

struct sp_write_arg_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t spare;
	uint32_t rebuild_ref;
	uint32_t alignment1;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint64_t bid;
	uint32_t nb_proj;
	uint32_t bsize;
	struct {
		u_int bins_len;
		char *bins_val;
	} bins;
};
typedef struct sp_write_arg_t sp_write_arg_t;

struct sp_write_arg_no_bins_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t spare;
	uint32_t rebuild_ref;
	uint32_t alignment1;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint64_t bid;
	uint32_t nb_proj;
	uint32_t bsize;
	uint32_t len;
};
typedef struct sp_write_arg_no_bins_t sp_write_arg_no_bins_t;

struct sp_write_repair_arg_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint64_t bid;
	uint32_t nb_proj;
	uint32_t bsize;
	uint64_t bitmap;
	struct {
		u_int bins_len;
		char *bins_val;
	} bins;
};
typedef struct sp_write_repair_arg_t sp_write_repair_arg_t;

struct sp_write_repair2_arg_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint64_t bid;
	uint32_t nb_proj;
	uint32_t bsize;
	uint64_t bitmap[3];
	struct {
		u_int bins_len;
		char *bins_val;
	} bins;
};
typedef struct sp_write_repair2_arg_t sp_write_repair2_arg_t;

struct sp_b2rep_t {
	uint64_t hdr[2];
	uint32_t relative_bid;
};
typedef struct sp_b2rep_t sp_b2rep_t;
#define ROZOFS_MAX_REPAIR_BLOCKS 6

struct sp_write_repair3_arg_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint64_t bid;
	uint32_t nb_proj;
	uint32_t bsize;
	sp_b2rep_t blk2repair[ROZOFS_MAX_REPAIR_BLOCKS];
	struct {
		u_int bins_len;
		char *bins_val;
	} bins;
};
typedef struct sp_write_repair3_arg_t sp_write_repair3_arg_t;

struct sp_write_repair_arg_no_bins_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint64_t bid;
	uint32_t nb_proj;
	uint32_t bsize;
	uint64_t bitmap;
	uint32_t len;
};
typedef struct sp_write_repair_arg_no_bins_t sp_write_repair_arg_no_bins_t;

struct sp_write_repair2_arg_no_bins_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint64_t bid;
	uint32_t nb_proj;
	uint32_t bsize;
	uint64_t bitmap[3];
	uint32_t len;
};
typedef struct sp_write_repair2_arg_no_bins_t sp_write_repair2_arg_no_bins_t;

struct sp_write_repair3_arg_no_bins_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint64_t bid;
	uint32_t nb_proj;
	uint32_t bsize;
	sp_b2rep_t blk2repair[ROZOFS_MAX_REPAIR_BLOCKS];
	uint32_t len;
};
typedef struct sp_write_repair3_arg_no_bins_t sp_write_repair3_arg_no_bins_t;

struct sp_read_arg_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t bsize;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint64_t bid;
	uint32_t nb_proj;
};
typedef struct sp_read_arg_t sp_read_arg_t;

struct sp_truncate_arg_no_bins_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t bsize;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint16_t last_seg;
	uint64_t last_timestamp;
	uint64_t bid;
	uint32_t len;
};
typedef struct sp_truncate_arg_no_bins_t sp_truncate_arg_no_bins_t;

struct sp_truncate_arg_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t bsize;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint8_t proj_id;
	uint32_t last_seg;
	uint64_t last_timestamp;
	uint64_t bid;
	struct {
		u_int bins_len;
		char *bins_val;
	} bins;
};
typedef struct sp_truncate_arg_t sp_truncate_arg_t;

struct sp_remove_arg_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	sp_uuid_t fid;
};
typedef struct sp_remove_arg_t sp_remove_arg_t;

struct sp_remove_chunk_arg_t {
	uint16_t cid;
	uint8_t sid;
	uint8_t layout;
	uint8_t bsize;
	uint8_t spare;
	uint32_t dist_set[ROZOFS_SAFE_MAX_RPC];
	sp_uuid_t fid;
	uint32_t rebuild_ref;
	uint32_t chunk;
};
typedef struct sp_remove_chunk_arg_t sp_remove_chunk_arg_t;

struct sp_clear_error_arg_t {
	uint8_t cid;
	uint8_t sid;
	uint8_t dev;
	uint8_t reinit;
};
typedef struct sp_clear_error_arg_t sp_clear_error_arg_t;

enum sp_device_e {
	SP_SAME_DEVICE = 0,
	SP_NEW_DEVICE = 1,
};
typedef enum sp_device_e sp_device_e;

struct sp_rebuild_start_arg_t {
	uint16_t cid;
	uint8_t sid;
	sp_uuid_t fid;
	sp_device_e device;
	uint8_t chunk;
	uint8_t spare;
	uint64_t start_bid;
	uint64_t stop_bid;
};
typedef struct sp_rebuild_start_arg_t sp_rebuild_start_arg_t;

struct sp_rebuild_start_ret_t {
	sp_status_t status;
	union {
		uint32_t rebuild_ref;
		int error;
	} sp_rebuild_start_ret_t_u;
};
typedef struct sp_rebuild_start_ret_t sp_rebuild_start_ret_t;

struct sp_rebuild_stop_arg_t {
	uint16_t cid;
	uint8_t sid;
	sp_uuid_t fid;
	sp_status_t status;
	uint32_t rebuild_ref;
};
typedef struct sp_rebuild_stop_arg_t sp_rebuild_stop_arg_t;

struct sp_rebuild_stop_ret_t {
	sp_status_t status;
	union {
		uint32_t rebuild_ref;
		int error;
	} sp_rebuild_stop_ret_t_u;
};
typedef struct sp_rebuild_stop_ret_t sp_rebuild_stop_ret_t;

struct sp_read_t {
	uint32_t filler;
	uint32_t filler1;
	uint32_t filler2;
	struct {
		u_int bins_len;
		char *bins_val;
	} bins;
	uint64_t file_size;
};
typedef struct sp_read_t sp_read_t;

struct sp_read_ret_t {
	sp_status_t status;
	union {
		sp_read_t rsp;
		int error;
	} sp_read_ret_t_u;
};
typedef struct sp_read_ret_t sp_read_ret_t;

struct sp_write_ret_t {
	sp_status_t status;
	union {
		uint64_t file_size;
		int error;
	} sp_write_ret_t_u;
};
typedef struct sp_write_ret_t sp_write_ret_t;

#define STORAGE_PROGRAM 0x20000002
#define STORAGE_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define SP_NULL 0
extern  void * sp_null_1(void *, CLIENT *);
extern  void * sp_null_1_svc(void *, struct svc_req *);
#define SP_WRITE 1
extern  sp_write_ret_t * sp_write_1(sp_write_arg_t *, CLIENT *);
extern  sp_write_ret_t * sp_write_1_svc(sp_write_arg_t *, struct svc_req *);
#define SP_READ 2
extern  sp_read_ret_t * sp_read_1(sp_read_arg_t *, CLIENT *);
extern  sp_read_ret_t * sp_read_1_svc(sp_read_arg_t *, struct svc_req *);
#define SP_TRUNCATE 3
extern  sp_status_ret_t * sp_truncate_1(sp_truncate_arg_t *, CLIENT *);
extern  sp_status_ret_t * sp_truncate_1_svc(sp_truncate_arg_t *, struct svc_req *);
#define SP_WRITE_REPAIR 4
extern  sp_write_ret_t * sp_write_repair_1(sp_write_repair_arg_t *, CLIENT *);
extern  sp_write_ret_t * sp_write_repair_1_svc(sp_write_repair_arg_t *, struct svc_req *);
#define SP_REMOVE 5
extern  sp_status_ret_t * sp_remove_1(sp_remove_arg_t *, CLIENT *);
extern  sp_status_ret_t * sp_remove_1_svc(sp_remove_arg_t *, struct svc_req *);
#define SP_REBUILD_START 6
extern  sp_rebuild_start_ret_t * sp_rebuild_start_1(sp_rebuild_start_arg_t *, CLIENT *);
extern  sp_rebuild_start_ret_t * sp_rebuild_start_1_svc(sp_rebuild_start_arg_t *, struct svc_req *);
#define SP_REBUILD_STOP 7
extern  sp_rebuild_stop_ret_t * sp_rebuild_stop_1(sp_rebuild_stop_arg_t *, CLIENT *);
extern  sp_rebuild_stop_ret_t * sp_rebuild_stop_1_svc(sp_rebuild_stop_arg_t *, struct svc_req *);
#define SP_REMOVE_CHUNK 8
extern  sp_status_ret_t * sp_remove_chunk_1(sp_remove_chunk_arg_t *, CLIENT *);
extern  sp_status_ret_t * sp_remove_chunk_1_svc(sp_remove_chunk_arg_t *, struct svc_req *);
#define SP_CLEAR_ERROR 9
extern  sp_status_ret_t * sp_clear_error_1(sp_clear_error_arg_t *, CLIENT *);
extern  sp_status_ret_t * sp_clear_error_1_svc(sp_clear_error_arg_t *, struct svc_req *);
#define SP_WRITE_REPAIR2 10
extern  sp_write_ret_t * sp_write_repair2_1(sp_write_repair2_arg_t *, CLIENT *);
extern  sp_write_ret_t * sp_write_repair2_1_svc(sp_write_repair2_arg_t *, struct svc_req *);
#define SP_WRITE_REPAIR3 11
extern  sp_write_ret_t * sp_write_repair3_1(sp_write_repair3_arg_t *, CLIENT *);
extern  sp_write_ret_t * sp_write_repair3_1_svc(sp_write_repair3_arg_t *, struct svc_req *);
#define SP_WRITE_EMPTY 18
extern  sp_write_ret_t * sp_write_empty_1(sp_write_arg_no_bins_t *, CLIENT *);
extern  sp_write_ret_t * sp_write_empty_1_svc(sp_write_arg_no_bins_t *, struct svc_req *);
extern int storage_program_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SP_NULL 0
extern  void * sp_null_1();
extern  void * sp_null_1_svc();
#define SP_WRITE 1
extern  sp_write_ret_t * sp_write_1();
extern  sp_write_ret_t * sp_write_1_svc();
#define SP_READ 2
extern  sp_read_ret_t * sp_read_1();
extern  sp_read_ret_t * sp_read_1_svc();
#define SP_TRUNCATE 3
extern  sp_status_ret_t * sp_truncate_1();
extern  sp_status_ret_t * sp_truncate_1_svc();
#define SP_WRITE_REPAIR 4
extern  sp_write_ret_t * sp_write_repair_1();
extern  sp_write_ret_t * sp_write_repair_1_svc();
#define SP_REMOVE 5
extern  sp_status_ret_t * sp_remove_1();
extern  sp_status_ret_t * sp_remove_1_svc();
#define SP_REBUILD_START 6
extern  sp_rebuild_start_ret_t * sp_rebuild_start_1();
extern  sp_rebuild_start_ret_t * sp_rebuild_start_1_svc();
#define SP_REBUILD_STOP 7
extern  sp_rebuild_stop_ret_t * sp_rebuild_stop_1();
extern  sp_rebuild_stop_ret_t * sp_rebuild_stop_1_svc();
#define SP_REMOVE_CHUNK 8
extern  sp_status_ret_t * sp_remove_chunk_1();
extern  sp_status_ret_t * sp_remove_chunk_1_svc();
#define SP_CLEAR_ERROR 9
extern  sp_status_ret_t * sp_clear_error_1();
extern  sp_status_ret_t * sp_clear_error_1_svc();
#define SP_WRITE_REPAIR2 10
extern  sp_write_ret_t * sp_write_repair2_1();
extern  sp_write_ret_t * sp_write_repair2_1_svc();
#define SP_WRITE_REPAIR3 11
extern  sp_write_ret_t * sp_write_repair3_1();
extern  sp_write_ret_t * sp_write_repair3_1_svc();
#define SP_WRITE_EMPTY 18
extern  sp_write_ret_t * sp_write_empty_1();
extern  sp_write_ret_t * sp_write_empty_1_svc();
extern int storage_program_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_sp_uuid_t (XDR *, sp_uuid_t);
extern  bool_t xdr_sp_status_t (XDR *, sp_status_t*);
extern  bool_t xdr_sp_status_ret_t (XDR *, sp_status_ret_t*);
extern  bool_t xdr_sp_write_arg_t (XDR *, sp_write_arg_t*);
extern  bool_t xdr_sp_write_arg_no_bins_t (XDR *, sp_write_arg_no_bins_t*);
extern  bool_t xdr_sp_write_repair_arg_t (XDR *, sp_write_repair_arg_t*);
extern  bool_t xdr_sp_write_repair2_arg_t (XDR *, sp_write_repair2_arg_t*);
extern  bool_t xdr_sp_b2rep_t (XDR *, sp_b2rep_t*);
extern  bool_t xdr_sp_write_repair3_arg_t (XDR *, sp_write_repair3_arg_t*);
extern  bool_t xdr_sp_write_repair_arg_no_bins_t (XDR *, sp_write_repair_arg_no_bins_t*);
extern  bool_t xdr_sp_write_repair2_arg_no_bins_t (XDR *, sp_write_repair2_arg_no_bins_t*);
extern  bool_t xdr_sp_write_repair3_arg_no_bins_t (XDR *, sp_write_repair3_arg_no_bins_t*);
extern  bool_t xdr_sp_read_arg_t (XDR *, sp_read_arg_t*);
extern  bool_t xdr_sp_truncate_arg_no_bins_t (XDR *, sp_truncate_arg_no_bins_t*);
extern  bool_t xdr_sp_truncate_arg_t (XDR *, sp_truncate_arg_t*);
extern  bool_t xdr_sp_remove_arg_t (XDR *, sp_remove_arg_t*);
extern  bool_t xdr_sp_remove_chunk_arg_t (XDR *, sp_remove_chunk_arg_t*);
extern  bool_t xdr_sp_clear_error_arg_t (XDR *, sp_clear_error_arg_t*);
extern  bool_t xdr_sp_device_e (XDR *, sp_device_e*);
extern  bool_t xdr_sp_rebuild_start_arg_t (XDR *, sp_rebuild_start_arg_t*);
extern  bool_t xdr_sp_rebuild_start_ret_t (XDR *, sp_rebuild_start_ret_t*);
extern  bool_t xdr_sp_rebuild_stop_arg_t (XDR *, sp_rebuild_stop_arg_t*);
extern  bool_t xdr_sp_rebuild_stop_ret_t (XDR *, sp_rebuild_stop_ret_t*);
extern  bool_t xdr_sp_read_t (XDR *, sp_read_t*);
extern  bool_t xdr_sp_read_ret_t (XDR *, sp_read_ret_t*);
extern  bool_t xdr_sp_write_ret_t (XDR *, sp_write_ret_t*);

#else /* K&R C */
extern bool_t xdr_sp_uuid_t ();
extern bool_t xdr_sp_status_t ();
extern bool_t xdr_sp_status_ret_t ();
extern bool_t xdr_sp_write_arg_t ();
extern bool_t xdr_sp_write_arg_no_bins_t ();
extern bool_t xdr_sp_write_repair_arg_t ();
extern bool_t xdr_sp_write_repair2_arg_t ();
extern bool_t xdr_sp_b2rep_t ();
extern bool_t xdr_sp_write_repair3_arg_t ();
extern bool_t xdr_sp_write_repair_arg_no_bins_t ();
extern bool_t xdr_sp_write_repair2_arg_no_bins_t ();
extern bool_t xdr_sp_write_repair3_arg_no_bins_t ();
extern bool_t xdr_sp_read_arg_t ();
extern bool_t xdr_sp_truncate_arg_no_bins_t ();
extern bool_t xdr_sp_truncate_arg_t ();
extern bool_t xdr_sp_remove_arg_t ();
extern bool_t xdr_sp_remove_chunk_arg_t ();
extern bool_t xdr_sp_clear_error_arg_t ();
extern bool_t xdr_sp_device_e ();
extern bool_t xdr_sp_rebuild_start_arg_t ();
extern bool_t xdr_sp_rebuild_start_ret_t ();
extern bool_t xdr_sp_rebuild_stop_arg_t ();
extern bool_t xdr_sp_rebuild_stop_ret_t ();
extern bool_t xdr_sp_read_t ();
extern bool_t xdr_sp_read_ret_t ();
extern bool_t xdr_sp_write_ret_t ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SPROTO_H_RPCGEN */
