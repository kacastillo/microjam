#include "jas/jas_text.h"

namespace jas {

  /* Text constructor */
  text::text() {

    // Ensure text is visible
    text_generator.set_z_order(-10);

    // Generate the sprites and store them in the vector
    text_generator.generate(TEXT_POSITION, instructions, text_sprites);

  }

}