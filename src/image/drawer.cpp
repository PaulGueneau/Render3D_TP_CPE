/*
**    TP CPE Lyon
**    Copyright (C) 2015 Damien Rohmer
**
**    This program is free software: you can redistribute it and/or modify
**    it under the terms of the GNU General Public License as published by
**    the Free Software Foundation, either version 3 of the License, or
**    (at your option) any later version.
**
**   This program is distributed in the hope that it will be useful,
**    but WITHOUT ANY WARRANTY; without even the implied warranty of
**    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**    GNU General Public License for more details.
**
**    You should have received a copy of the GNU General Public License
**    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "drawer.hpp"

#include "discrete/ivec2.hpp"
#include "discrete/line_discrete.hpp"
#include "discrete/line_interpolation_parameter.hpp"
#include "discrete/bresenham.hpp"
#include "discrete/triangle_scanline.hpp"
#include "image.hpp"
#include "image_zbuffer.hpp"
#include "color.hpp"
#include "lib/3d/vec2.hpp"
#include "texture.hpp"

namespace cpe
{


void draw_line(image& im,ivec2 const& p0,ivec2 const& p1,color const& c)
{
    /*************************************
    // TO DO
    /*************************************
    // Affichez une ligne sur l'image
    //
    // Completez une structure line_discrete a l'aide de
    //   l'algorithme de Bresenham entre p0 et p1.
    // Pour tous les pixel p du segment
    //   Affecter im(p) a la couleur c
    //
    */
}

void draw_line(image& im,ivec2 const& p0,ivec2 const& p1,color const& c0,color const& c1)
{

    /*************************************
    // TO DO
    /*************************************
    // Affichez une ligne de couleur variable entre p0 de couleur c0, et p1 de couleur c1
    //
    // Completez une structure line_discrete a l'aide de
    //   l'algorithme de Bresenham entre p0 et p1.
    // Construire une structure line_interpolation_parameter
    //   a partir de la ligne discrete
    //
    // Pour toute les pixels de la ligne a l'indice k
    //    p <- position a l'indice k
    //    alpha <- parametre d'interpolation a l'indice k
    //    Calculer couleur courante en fonction de alpha, c0, et c1
    //    Appliquer la couleur courante a im(p)
    //
    */
}



void draw_triangle(image& im,
                   ivec2 const& p0,ivec2 const& p1,ivec2 const& p2,color const& c)
{


    /*************************************
    // TO DO
    /*************************************
    // Affichez un triangle plein de couleur uniforme
    //
    // Definir une structure scanline sur (p0,p1,p2).
    //   le parametere peut etre definit arbitrairement.
    //   (par exemple triangle_scanline_factory(p0,p1,p2 , c,c,c); )
    //
    // Pour toutes les valeurs y du scanline
    //   pa <- position a gauche
    //   pb <- position a droite
    //   Afficher segment entre pa et pb de couleur c
    //
    */


}

void draw_triangle(image& im,
                   ivec2 const& p0,ivec2 const& p1,ivec2 const& p2,
                   color const& c0,color const& c1,color const& c2)
{

    /*************************************
    // TO DO
    /*************************************
    // Affichez un triangle plein de couleur uniforme
    //
    // Definir une structure scanline sur (p0,p1,p2).
    //   de parametre (c0,c1,c2)
    //
    // Pour toutes les valeurs y du scanline
    //   pa <- position a gauche
    //   pb <- position a droite
    //
    //   ca <- couleur a gauche
    //   cb <- couleur a droite
    //
    //   Afficher segment entre pa et pb
    //        avec couleur variant entre ca et cb
    //
    */

}


void draw_point(image& im,image_zbuffer& zbuffer,ivec2 const& p,float const z,color const& c)
{
    if(p.x()<0 || p.x()>=im.Nx())
        return ;
    if(p.y()<0 || p.y()>=im.Ny())
        return ;

    /*************************************
    // TO DO
    /*************************************
    // Si z est compris dans [-1,1] et que z
    //   est plus faible que zbuffer(p)
    //  Alors mettre a jour la couleur et le zbuffer
    */
}





void draw_triangle(image& im,image_zbuffer& zbuffer,
                   ivec2 const& p0,ivec2 const& p1,ivec2 const& p2,
                   color const& c0,color const& c1,color const& c2,
                   float z0,float z1,float z2)
{


    /*************************************
    // TO DO
    /*************************************
    // Construire scanline avec couleur
    // Construire scanline avec profondeur
    // Parcourir les deux scanline (utilisez les iterateurs)
    //   pa <- point gauche
    //   pb <- point droit
    //
    //   ca <- couleur a gauche
    //   cb <- couleur a droite
    //
    //   za <- profondeur a gauche
    //   zb <- profondeur a droite
    //
    //   affiche ligne entre pa et pb
    //     de couleur variant entre ca et cb
    //     de pronfondeur variant entre za et zb
    */

}




}
