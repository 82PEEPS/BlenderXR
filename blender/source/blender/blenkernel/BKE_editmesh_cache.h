/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#ifndef __BKE_EDITMESH_CACHE_H__
#define __BKE_EDITMESH_CACHE_H__

/** \file BKE_editmesh_cache.h
 *  \ingroup bke
 */

struct BMEditMesh;
struct EditMeshData;

void BKE_editmesh_cache_ensure_poly_normals(struct BMEditMesh *em, struct EditMeshData *emd);
void BKE_editmesh_cache_ensure_vert_normals(struct BMEditMesh *em, struct EditMeshData *emd);

void BKE_editmesh_cache_ensure_poly_centers(struct BMEditMesh *em, struct EditMeshData *emd);

#endif /* __BKE_EDITMESH_CACHE_H__ */
