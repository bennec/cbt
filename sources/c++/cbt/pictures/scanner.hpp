/**********************************************************************************
 * MIT License                                                                    *
 *                                                                                *
 * Copyright © 2023 by Christophe Benne, this file is part of CBT software.       *
 *                                                                                *
 * Permission is hereby granted, free of charge, to any person obtaining a copy   *
 * of this software and associated documentation files (the "Software"), to deal  *
 * in the Software without restriction, including without limitation the rights   *
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell      *
 * copies of the Software, and to permit persons to whom the Software is          *
 * furnished to do so, subject to the following conditions:                       *
 *                                                                                *
 * The above copyright notice and this permission notice shall be included in all *
 * copies or substantial portions of the Software.                                *
 *                                                                                *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR     *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,       *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE    *
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER         *
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,  *
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE  *
 * SOFTWARE.                                                                      *
 * ********************************************************************************/

#ifndef _CBT_PICTURES_SCANNER__HPP_
#define _CBT_PICTURES_SCANNER__HPP_

/**********************************************************************************
 * \file  scanner.hpp
 * \brief Scanner class declarations file.
 **********************************************************************************/

namespace cbt
{

  namespace pictures
  {

    /*!
     * \brief Base class for directory scanners
     */
    class Scanner
    {
    public:

      /**
       * \brief  Destructor.
       */
      virtual ~Scanner();

    private:
      
      /**
       * \brief  Default constructor.
       *
       * Default constructor is private and not implemented.
       */
      Scanner();

      /**
       * \brief  Copy constructor.
       *
       * Copy constructor is private and not implemented.
       *
       * \param  anObj An instance to be copied.
       */
      Scanner(const Scanner& anObj);

      /**
       * \brief  Assignment operator.
       *
       * Assignment operator is private and not implemented.
       *
       * \param  anObj An instance to be copied.
       */
      Scanner& operator=(const Scanner& anObj);
    };

  }

}


#endif
